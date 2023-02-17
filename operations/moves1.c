/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:59:49 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/17 22:40:45 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_data *data, int flag)
{
	t_stack *forst;
	t_stack *sekend;
	t_stack *thurd;

	sekend = data->a; // 1
	forst = data->a->next; // 2
	thurd = data->a->next->next; // 3
	data->a = forst;
	data->a->next = sekend;
	data->a->next->next = thurd;
	data->head_a = forst;
	if (flag == 1)
		ft_putendl_fd("sa", 1);
}

void	swap_b(t_data *data, int flag)
{
	t_stack *forst;
	t_stack *sekend;
	t_stack *thurd;

	sekend = data->b; // 1
	forst = data->b->next; // 2
	thurd = data->b->next->next; // 3
	data->b = forst;
	data->b->next = sekend;
	data->b->next->next = thurd;
	data->head_b = forst;
	if (flag == 1)
		ft_putendl_fd("sb", 1);
}

void	sa_sb(t_data *data)
{
	swap_a(data, 0);
	swap_b(data, 0);
	ft_putendl_fd("ss", 1);
}

void	push_a(t_data *data)
{
	t_stack *tmp_a;
	t_stack *tmp_b_nxt;
	 
	tmp_a = data->a;
	tmp_b_nxt = data->b->next;
	data->a = data->head_b;
	data->head_a = data->a;
	data->a->next = tmp_a;
	data->b = tmp_b_nxt;
	data->head_b = data->b;
	ft_putendl_fd("pa", 1);

}

void	push_b(t_data *data)
{
	t_stack *tmp_b;
	t_stack *tmp_a_nxt;

	tmp_b = data->b;
	tmp_a_nxt = data->a->next;
	data->b = data->head_a;
	data->head_b = data->b;
	data->b->next = tmp_b;
	data->a = tmp_a_nxt;
	data->head_a = data->a;
	ft_putendl_fd("pb", 1);
}
