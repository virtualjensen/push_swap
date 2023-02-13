/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 20:23:10 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/22 19:26:38 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

// #include <fcntl.h>
// int main()
// {
// 	int fd;

// 	fd = open("helo.txt",  O_RDWR);
// 	ft_putendl_fd("Hello darkness my old friend", fd);
// }