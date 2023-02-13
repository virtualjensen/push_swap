/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:42:01 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/27 18:02:10 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	newstrlen(char *str, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == dstsize)
			return (i);
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	i = newstrlen(dst, dstsize);
	j = 0;
	src_len = ft_strlen(src);
	dst_len = newstrlen(dst, dstsize);
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize != i)
	dst[i] = '\0';
	if (dstsize > dst_len)
		return (src_len + dst_len);
	else
		return (src_len + dstsize);
}
