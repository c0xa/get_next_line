/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:20:34 by tblink            #+#    #+#             */
/*   Updated: 2020/11/11 22:02:31 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

int		get_next_line(int fd, char **line)
{
	char *str;
	size_t len;
	char c;

	if (fd < 0)
		return (-1);
	if (!(str = (char**)malloc(sizeof(char*) * BUFFER_SIZE + 1)))
		return (-1);
	len = BUFFER_SIZE;
	while (len-- && c)
	{
		str += read(fd, c, 1);
	}
}
