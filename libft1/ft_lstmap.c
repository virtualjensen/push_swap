/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 21:39:58 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/26 23:11:26 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	while (lst)
	{
		tmp = ft_lstnew(lst->content);
		tmp->content = f(tmp->content);
		if (!tmp)
		{
			ft_lstclear((&tmp), del);
			if (new)
				ft_lstclear((&new), del);
			return (NULL);
		}
		ft_lstadd_back((&new), tmp);
		lst = lst->next;
	}
	return (new);
}
