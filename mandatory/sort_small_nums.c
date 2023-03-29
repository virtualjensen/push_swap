/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_nums.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:00:41 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/29 16:01:09 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_data *data)
{
	t_stack	*node_1;
	t_stack	*node_2;
	t_stack	*node_3;

	node_1 = data->a;
	node_2 = data->a->next;
	node_3 = data->a->next->next;
	if (node_1->index > node_2->index && node_1->index < node_3->index)
		swap_a(data, 1);
	else if (node_1->index > node_2->index && node_2->index > node_3->index)
	{
		rotate_a(data, 1);
		swap_a(data, 1);
	}
	else if (node_1->index > node_3->index && node_2->index < node_3->index)
		rotate_a(data, 1);
	else if (node_1->index < node_2->index && node_1->index < node_3->index
		&& node_2->index > node_3->index)
	{
		swap_a(data, 1);
		rotate_a(data, 1);
	}
	else if (node_1->index < node_2->index && node_1->index > node_3->index)
		r_rotate_a(data, 1);
}

void	move_conditions_4(t_data *data, ssize_t index)
{
	if (index == 1)
		swap_a(data, 1);
	else if (index == 2)
	{
		r_rotate_a(data, 1);
		r_rotate_a(data, 1);
	}
	else if (index == 3)
		r_rotate_a(data, 1);
	push_to_b(data);
}

void	move_conditions_5(t_data *data, ssize_t index)
{
	if (index == 1)
		swap_a(data, 1);
	else if (index == 2)
	{
		rotate_a(data, 1);
		rotate_a(data, 1);
	}
	else if (index == 3)
	{
		r_rotate_a(data, 1);
		r_rotate_a(data, 1);
	}
	else if (index == 4)
		r_rotate_a(data, 1);
	push_to_b(data);
}

void	sort_4(t_data *data, ssize_t index)
{
	ssize_t	min_pos;

	min_pos = index_distance(data->a, index);
	move_conditions_4(data, min_pos);
	sort_3(data);
	push_to_a(data);
}

void	sort_5(t_data *data)
{
	ssize_t	min_pos;

	min_pos = index_distance(data->a, 0);
	move_conditions_5(data, min_pos);
	sort_4(data, 1);
	push_to_a(data);
}
