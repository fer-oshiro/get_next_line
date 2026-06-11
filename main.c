/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsayuri- <fsayuri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 10:51:17 by fsayuri-          #+#    #+#             */
/*   Updated: 2026/06/11 16:39:50 by fsayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main ()
{
	int	fd;
	
	fd = open("README.MD", O_RDONLY);
	get_next_line(fd);
	get_next_line(fd);

	return (0);
}
