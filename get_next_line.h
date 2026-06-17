/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsayuri- <fsayuri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 17:47:26 by fsayuri-          #+#    #+#             */
/*   Updated: 2026/06/12 12:02:56 by fsayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

// Apagar
#include <stdio.h>

typedef enum e_bool
{
    FALSE = 0,
    TRUE = 1
}   t_bool;

typedef struct e_end_line
{
	char	*res;
	t_bool	final;
}   t_end_line;

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 12
#endif

#endif

