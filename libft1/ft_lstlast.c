/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 01:40:18 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/26 18:45:51 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != 0)
	{
		lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*old;
// 	t_list	*new;
// 	t_list	*new2;
// 	t_list	*last;

// 	old = ft_lstnew("abcd");
// 	new = ft_lstnew("1234");
// 	new2 = ft_lstnew("###");
// 	ft_lstadd_front(&old, new);
// 	ft_lstadd_front(&old, new2);
// 	last = ft_lstlast(old);
// 	printf("%s\n", last->content);
// }