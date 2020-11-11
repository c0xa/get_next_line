/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:54:39 by tblink            #+#    #+#             */
/*   Updated: 2020/11/11 21:37:18 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

size_t	ft_strlen(const char *s)
{
	size_t n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if (*str == ch)
			return ((char*)str);
		str++;
	}
	if (*str == (char)ch)
		return ((char*)str);
	return (NULL);
}
