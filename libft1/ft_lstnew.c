/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:06:12 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/24 02:20:14 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>

// int	main()
// {
// 	char *str;
// 	// t_list *new;

// 	str = ft_strdup("abcd");
// 	// new = ft_lstnew(str);
// 	printf("node before: %s\n", str);
// 	ft_strlcpy(str, "1234", 4);
// 	free (str);
// 	printf("node after: %s\n", str);
// }