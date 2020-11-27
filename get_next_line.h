/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:19:34 by tblink            #+#    #+#             */
/*   Updated: 2020/11/26 19:07:04 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2, int len2);
char	*ft_strchr(char *str, int ch);
char    *stream(char **line, char *buf);
int		writefile(int fd, char **line, char **bufs);

#endif
