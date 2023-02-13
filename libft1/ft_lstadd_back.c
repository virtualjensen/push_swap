/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:02:40 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/27 18:04:17 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (!lst || !new)
		return ;
	if (*lst)
	{
		while ((*lst)->next != NULL)
		{
			(*lst) = (*lst)->next;
		}
		(*lst)->next = new;
		*lst = head;
	}
	else
		*lst = new;
}

// int main()
// {
// 	t_list *first;
// 	// t_list *sec;
// 	// t_list	*third;
// 	// t_list	*new;
// 	// t_list *tmp;

// 	first = ft_lstnew("1111");
// 	// sec = ft_lstnew("222");
// 	// third = ft_lstnew("333");
// 	// new = ft_lstnew("44");
// 	// ft_lstadd_front(&first, sec);
// 	// ft_lstadd_front(&first, third);
// 	// tmp = first;
// 	// while (tmp)
// 	// {
// 	// 	printf("%s\n", tmp->content);
// 	// 	tmp = tmp->next;
// 	// }
// 	ft_lstadd_back(&first, ft_lstnew((void*)1));
// 	while (first)
// 	{
// 		printf("%s\n", first->content);
// 		first = first->next;
// 	}
// }