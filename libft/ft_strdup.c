/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:41:43 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/14 21:28:12 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;
	char	*cn;

	i = 0;
	cn = (char *)s1;
	while (cn[i])
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (cn[i])
	{
		dup[i] = cn[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	const char	s1[] = "my name jeff";
// 	char *tmp;

// 	tmp = NULL;
// 	if (tmp)
// 		printf("we have something here\n");
// 	tmp = ft_strdup(s1);
// 	printf("%s\n", tmp);
// 	free(tmp);
// 	tmp = strdup(s1);
// 	printf("%s", tmp);
// 	free(tmp);
// 	return (0);
// }