/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:03:04 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/22 19:32:26 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*sub;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	i = start;
	j = 0;
	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_strdup(""));
	if (len < ft_strlen(s + start))
		sub = malloc(len + 1);
	else
		sub = malloc(sizeof(char) * (ft_strlen(s + start) + 1));
	if (!s || !sub)
		return (NULL);
	while (s[i] && i < len + start)
	{
		sub[j++] = s[i++];
	}
	sub[j] = '\0';
	return (sub);
}

// #include <stdio.h>
// int main()
// {
// 	char s[] = "i cant think a sentence";
// 	char *sub = ft_substr(s, 6, 100000);
// 	free(sub);
// }