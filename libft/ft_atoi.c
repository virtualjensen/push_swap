/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:51:18 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/14 21:18:29 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	s;
	size_t	n;

	i = 0;
	s = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
		n = n * 10 + (str[i++] - 48);
	return (n * s);
}

// #include <stdio.h>
// #include <limits.h>
// #include "stdlib.h"

// int	main ()
// {
// 	const char	str[] = " 2147483648";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d", atoi(str));
// }