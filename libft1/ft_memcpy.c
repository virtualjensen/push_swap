/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:00:41 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/22 19:17:37 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;
	size_t	i;

	dst1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	if (!src && !dst)
		return (0);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char src[] = "No Mistakes, Just Happy Accidents";
// 	char dst[] = "test";
// 	char src2[] = "No Mistakes, Just Happy Accidents";
// 	char dst2[] = "test";
// 	size_t n = 32;

// 	printf("%s\n", ft_memcpy(NULL, src, n));
// 	printf("dst: %s | src: %s\n", dst, src);
// 	printf("%s\n", memcpy(dst2, src2, n));
// }