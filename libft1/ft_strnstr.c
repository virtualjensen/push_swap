/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:43:49 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/22 00:30:33 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hys;
	char	*ndl;

	hys = (char *)haystack;
	ndl = (char *)needle;
	i = 0;
	if (ndl[0] == '\0')
		return (hys);
	while (hys[i] != '\0' && i < len)
	{
		j = 0;
		while ((hys[j + i] == ndl[j]) && (hys[i + j] != '\0') && (j + i < len))
		{
			if (ndl[j + 1] == '\0')
			{
				return (&hys[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char	haystack[] = "test";
// 	char	needle[] = "e";
// 	size_t	len = 2;

// 	printf("%s\n", ft_strnstr(haystack, needle, len));
// 	printf("%s\n", strnstr(haystack, needle, len));
// }