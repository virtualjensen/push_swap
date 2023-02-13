/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:39:59 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/22 19:28:52 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			i;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c1)
		{
			return (s1 + i);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	unsigned char s[] = "no woman no cry";
// 	int c = 'y';
// 	size_t n = 15;

// 	printf("%s\n", ft_memchr(s, c, n));
// 	printf("%s\n", memchr(s, c, n));

// }