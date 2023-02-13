/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:43:54 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/22 19:30:31 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*cn;

	cn = (char *)s;
	i = 0;
	while (cn[i] != '\0')
	{
		if (cn[i] == (char)c)
		{
			return (cn + i);
		}
		i++;
	}
	if (c == '\0')
		return (&cn[i]);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	const	char s[] = "Johnny you hit me";

// 	printf("%s\n", ft_strchr(s, 'y'));
// 	printf("%s\n", strchr(s, 'y'));
// }