/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsayuri- <fsayuri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 17:48:11 by fsayuri-          #+#    #+#             */
/*   Updated: 2026/06/11 18:09:21 by fsayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char *get_next_line(int fd)
{
	char buff[BUFFER_SIZE + 1];
	int bytes_read;
	static char *res;
	char *result;
	int	len;

	if (fd < 0)
		return (NULL);

	if (!res)
	{
		res = malloc(1);
		res[0] = 0;
	}
	printf("inicio res: %s\n", res);
	
	bytes_read = read(fd, buff, BUFFER_SIZE);
	buff[bytes_read] = '\0';
	result = malloc(1);
	result[0] = 0;
	if (bytes_read > 0)
		result = ft_strjoin(result, buff);
	while (bytes_read > 0 && ft_strchr(buff, '\n') == 0)
	{
		bytes_read = read(fd, buff, BUFFER_SIZE);
		buff[bytes_read] = '\0';
		if (ft_strchr(buff, '\n') != 0)
		{
			len = 0;
			while (buff[len] != '\n')
				len++;
			result = ft_strjoin(result, ft_substr(buff, 0, len + 1));
			free(res);
			res = ft_substr(ft_strchr(buff, '\n'), 1, BUFFER_SIZE);
		}
		else
			result = ft_strjoin(result, buff);
	}
	
	printf("result: %s\n", result);
	printf("res: %s\n", res);
	printf("\n=-=-=-=-\n");
	return (ft_strjoin(res, result));
}
