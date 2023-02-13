/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:23:58 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/22 19:24:06 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	i = 0;
	if (s == NULL)
		return (NULL);
	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ret == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

// char	pupper(unsigned int n, char c)
// {
// 	c = ft_toupper(c);
// 	return(c);
// }

// #include <stdio.h>
// int main()
// {
// 	char *x;

// 	x = ft_strmapi("hello my name jeff", pupper);
// 	printf("%s\n", x);
// }