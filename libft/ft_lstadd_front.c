/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:58:21 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/24 02:19:44 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*old;
// 	t_list	*tmp;
// 	t_list	*new;
// 	t_list	*new2;

// 	old = ft_lstnew("abcd");
// 	tmp = old;
// 	while (tmp)
// 	{
// 		printf("before: %s\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// 	new = ft_lstnew("1234");
// 	new2 = ft_lstnew("###");
// 	ft_lstadd_front(&old, new);
// 	ft_lstadd_front(&old, new2);
// 	while (old)
// 	{
// 		printf("%s", old->content);
// 		if (old->next)
// 			`printf(" -->");
// 		old = old->next;
// 	}
// }