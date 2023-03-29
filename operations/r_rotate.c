/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:48:55 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/29 16:34:59 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lst_b4last(t_stack *stack)
{
	t_stack	*ret;

	if (!stack)
		return (NULL);
	ret = stack;
	while (ret->next->next)
	{
		ret = ret->next;
	}
	return (ret);
}

//shift down all elements in stack A by one, last element will be on top.
void	r_rotate_a(t_data *data, int flag)
{
	t_stack	*og_top;
	t_stack	*new_top;
	t_stack	*last_node;

	if (!data->a || !data->a->next)
		return ;
	og_top = data->a;
	new_top = ps_lstlast(data->a);
	last_node = lst_b4last(data->a);
	data->head_a = new_top;
	data->a = data->head_a;
	data->a->next = og_top;
	last_node->next = NULL;
	if (flag == 1)
		ft_putendl_fd("rra", 1);
}

//shift down all elements in stack B by one, last element will be on top.
void	r_rotate_b(t_data *data, int flag)
{
	t_stack	*og_top;
	t_stack	*new_top;
	t_stack	*last_node;

	if (!data->b || !data->b->next)
		return ;
	og_top = data->b;
	new_top = ps_lstlast(data->b);
	last_node = lst_b4last(data->b);
	data->head_b = new_top;
	data->b = data->head_b;
	data->b->next = og_top;
	last_node->next = NULL;
	if (flag == 1)
		ft_putendl_fd("rrb", 1);
}

//both rra and rrb
void	rrr(t_data *data)
{
	if (!data->a || !data->a->next || !data->b || !data->b->next)
		return ;
	r_rotate_a(data, 0);
	r_rotate_b(data, 0);
	ft_putendl_fd("rrr", 1);
}
