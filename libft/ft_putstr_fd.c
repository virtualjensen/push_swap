/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 20:14:03 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/22 19:25:54 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}

// #include <fcntl.h>
// int main()
// {
// 	int fd;

// 	fd = open("helo.txt",  O_RDWR);
// 	ft_putstr_fd("Hello darkness my old friend", fd);
// }