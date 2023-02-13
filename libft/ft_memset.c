/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:34:17 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/11 17:28:02 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

// #include <stdio.h>
// int main()
// {
// 	char b[] = "Morbussy Time";

// 	printf("str = %s\n", b);
// 	ft_memset(b, '*', 4);
// 	printf("Calling memset\n %s\n", b);
// }
