/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:43:39 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/27 18:02:39 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ret;
	char	*s1_c;

	i = 0;
	s1_c = (char *)s1;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j && ft_strchr(set, s1[j]))
		j--;
	ret = ft_substr(s1_c, i, j - i + 1);
	return (ret);
}

// int main()
// {
// 	char s1[] = "xzo zzz zxo Test xxo xzo";
// 	char set[] = "xzo ";

// 	printf("%s\n", ft_strtrim(s1, set));
// }