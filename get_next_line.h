/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:19:34 by tblink            #+#    #+#             */
/*   Updated: 2020/11/11 21:36:09 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <get_next_line.h>
# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);

#endif