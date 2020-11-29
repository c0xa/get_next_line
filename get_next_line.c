/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:20:34 by tblink            #+#    #+#             */
/*   Updated: 2020/11/29 15:46:37 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char		*bufs[1024];
	int				flag;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0 || !line)
		return (-1);
	if (!bufs[fd])
	{
		if (!(bufs[fd] = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
			return (-1);
		bufs[fd][0] = '\0';
	}
	*line = 0;
	flag = writefile(fd, line, &(bufs[fd]));
	if (flag == 0 || flag == -1)
	{
		free(bufs[fd]);
		bufs[fd] = NULL;
	}
	return (flag);
}
