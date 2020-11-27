/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:54:39 by tblink            #+#    #+#             */
/*   Updated: 2020/11/27 22:01:08 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int            ft_strlen(char *s)
{
    int n;

    
    if (!s)
        return (0);
    n = 0;
    while (s[n])
        n++;
    return (n);
}

char        *ft_strjoin(char *s1, char *s2, int len2)
{
    size_t    len1;
    char    *buf;
    int        i;

    i = 0;
    if (len2 < 0)
        len2 = 0;
    len1 = ft_strlen(s1);
    if (!(buf = (char*)malloc((len1 + len2 + 1) * sizeof(char))))
        return (NULL);
    while (len1--)
    {
        buf[i] = s1[i];
        i++;
    }
    while (len2--)
    {
        buf[i] = *s2++;
        i++;
    }
    buf[i] = '\0';
    if (s1)
        free(s1);
    return (buf);
}

char        *ft_strchr(char *str, int ch)
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

char        *stream(char **line, char *buf)
{
    char    *s;
    int        len;
    int        i;

    i = 0;
    len = 0;
    while (buf[len] != '\n' && buf[len])
    {
        len++;
    }
    *line = ft_strjoin(*line, buf, len);
    if (!(s = (char*)malloc((BUFFER_SIZE + 1) * sizeof(char))))
        return (NULL);
    if (buf[len] == '\n' && buf[len])
        len++;
    while (buf[len])
    {
        s[i++] = buf[len++];
    }
    s[i] = '\0';
    if (buf)
        free(buf);
    return (s);
}

int            writefile(int fd, char **line, char **bufs)
{
    char    *l;
    int        k;

    if (ft_strlen(*bufs))
    {
        l = ft_strchr(*bufs, '\n');
        *bufs = stream(line, *bufs);
        if (l)
            return (1);
    }
    while ((k = read(fd, *bufs, BUFFER_SIZE)))
    {
        if (k == -1)
            return (-1);
        (*bufs)[k] = '\0';
        if ((ft_strchr(*bufs, '\n')))
        {
            
            *bufs = stream(line, *bufs);
            return (1);
        }
        else
            *line = ft_strjoin(*line, *bufs, k);
    }
    if (!k && !*line)
        *line = ft_strjoin(*line, *bufs, 0);
    return (0);
}
