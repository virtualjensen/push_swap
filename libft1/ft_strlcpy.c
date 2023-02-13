/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:03:36 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/27 18:02:04 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	char	*cn;

	cn = (char *)src;
	i = 0;
	j = 0;
	while (cn[i] != '\0')
		i++;
	if (dstsize != 0)
	{
		while (cn[j] != '\0' && j < dstsize - 1)
		{
			dst[j] = cn[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char dst[] = "a";
// 	char src[] = "wackawackawacka";
// 	char dst2[] = "a";
// 	char src2[] = "wackawackawacka";
// 	size_t dstsize = 3;

// 	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
// 	printf("%zu", strlcpy(dst2, src2, dstsize));
// 	return (0);
// }
