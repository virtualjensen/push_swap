/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:28:14 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/22 00:11:50 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_uc;
	unsigned char	*s2_uc;

	s1_uc = (unsigned char *)s1;
	s2_uc = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((s1_uc[i] != '\0' && s2_uc[i] != '\0')
		&& (s1_uc[i] == s2_uc[i]) && (i < n - 1))
	{
		i++;
	}
	if (s1_uc[i] != s2_uc[i])
	{
		return (s1_uc[i] - s2_uc[i]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char s1[] = "Johnny you hit me";
// 	char s2[] = "Johnny";
// 	size_t n = 9;

// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	printf("%d\n", strncmp(s1, s2, n));
// }