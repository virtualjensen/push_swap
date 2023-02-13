/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:58:33 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/26 22:40:57 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!(lst))
		return ;
	while (*lst)
	{
		tmp = (*lst);
		(*lst) = ((*lst)->next);
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
