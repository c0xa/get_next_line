/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:19:34 by tblink            #+#    #+#             */
/*   Updated: 2020/11/29 16:02:36 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
int		writefile(int fd, char **line, char **bufs);
char	*stream(char **line, char *buf);
char	*ft_strjoin(char *s1, char *s2, int len2);
int		freestr(char **dest, char *src);
int		ft_strchr_strlen(char *str, int flag);

#endif
