/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:16:32 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/14 21:26:41 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*chs1;
	unsigned char	*chs2;
	size_t			i;

	chs1 = (unsigned char *)s1;
	chs2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (chs1[i] != chs2[i])
		{
			return (chs1[i] - chs2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	unsigned char s1[] = "  ";
// 	unsigned char s2[] = "  ";
// 	size_t n = 17;

// 	printf("%d\n", ft_memcmp(s1, s2, n));
// 	printf("%d\n", memcmp(s1, s2, n));
// }