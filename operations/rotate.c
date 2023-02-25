/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:35:04 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/25 18:40:15 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//shift up all of elements in stack A by one, first element will be last.
void	rotate_a(t_data *data, int flag)
{
	t_stack	*og_top;
	t_stack	*last_node;

	if (!data->a || !data->a->next)
		return ;
	last_node = ps_lstlast(data->a);
	og_top = data->a;
	data->head_a = data->a->next;
	data->a = data->head_a;
	last_node->next = og_top;
	og_top->next = NULL;
	if (flag == 1)
		ft_putendl_fd("ra", 1);
}

//shift up all of elements in stack B by one, first element will be last.
void	rotate_b(t_data *data, int flag)
{
	t_stack	*og_top;
	t_stack	*last_node;

	if (!data->b || !data->b->next)
		return ;
	last_node = ps_lstlast(data->b);
	og_top = data->b;
	data->head_b = data->b->next;
	data->b = data->head_b;
	last_node->next = og_top;
	og_top->next = NULL;
	if (flag == 1)
		ft_putendl_fd("rb", 1);
}

void	ra_rb(t_data *data)
{
	if (!data->a || !data->a->next || !data->b || !data->b->next)
		return ;
	rotate_a(data, 0);
	rotate_b(data, 0);
	ft_putendl_fd("rr", 1);
}
