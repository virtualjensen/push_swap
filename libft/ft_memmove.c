/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:49:22 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/22 19:18:31 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!(char *)dst && !(char *)src)
		return (NULL);
	if (dst > src)
	{
		i = len - 1;
		while ((int)i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

// int main()
// {
// 	char dst1[] = "hello";
// 	char src1[] = "woman";
// 	size_t len = 6;

// 	printf("%s\n", ft_memmove(dst1, src1, len));
// }