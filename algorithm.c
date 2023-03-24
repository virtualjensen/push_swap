/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:46:10 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/24 15:57:00 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	sort_2(t_data *data)
{
	// if (ps_lst_size(data->a) == 2 && data->a->num > data->a->next->num)
		swap_a(data, 1);
}

void	sort_3(t_data *data)
{
	t_stack *node_1;
	t_stack *node_2;
	t_stack *node_3;

	node_1 = data->a;
	node_2 = data->a->next;
	node_3 = data->a->next->next;
	// debug_ps(*data);
	if (node_1->num > node_2->num && node_1->num < node_3->num)
		swap_a(data, 1);
	else if (node_1->num > node_2->num && node_2->num > node_3->num)
	{
		rotate_a(data, 1);
		swap_a(data, 1);
	}
	else if (node_1->num > node_3->num && node_2->num < node_3->num)
		rotate_a(data, 1);
	else if (node_1->num < node_2->num && node_1->num < node_3->num)
	{
		swap_a(data, 1);
		rotate_a(data, 1);
	}
	else if (node_1->num < node_2->num && node_1->num > node_3->num)
		r_rotate_a(data, 1);
}

void	sort_4(t_data *data)
{
	t_stack *cur;
	t_stack *min;

	cur = data->a;
	while (cur)
	{
		debug_ps(*data);
		printf("current value: %zd\n", cur->index);
		if (cur->index > data->a->next->index)
			cur = cur->next;
		min = cur;
		printf("min value: %zd\n", min->index);
	}
}

void	chunky_sort(t_data *data, ssize_t chunk_size)
{
	ssize_t chunk_index;
	ssize_t counter;
	t_stack *tmp;

	chunk_index = 0;
	tmp = data->a;
	counter = 0;
	while (ps_lst_size(tmp) != 0)
	{
		while (tmp)
		{
			if (check_chunk(tmp->index, chunk_size, chunk_index))
			{
				push_to_b(data);
				tmp = data->a;
				if (tmp == NULL)
					break ;
				// if (check_chunk(tmp->index, chunk_size / 2, chunk_index))
				// 	rotate_b(data, 1);
				counter++;
			}
			if (counter == chunk_size)
			{
				counter = 0;
				chunk_index++;
			}
			rotate_a(data, 1);
			tmp = tmp->next;
		}
		tmp = data->a; // check later
	}
	back_to_a(data);
}

int	index_distance(t_stack *stack, ssize_t index)
{
	ssize_t	i;

	i = 0;
	while (stack)
	{
		if (stack->index == index)
			return (i);
		stack = stack->next;
		i++;
	}
	return (i);
}

void	back_to_a(t_data *data)
{
	ssize_t	max_index;

	max_index = ps_lst_size(data->b) - 1;
	while (ps_lst_size(data->b) != 0)
	{
		if (data->b->index == max_index)
		{
			push_to_a(data);
			max_index--;
		}
		if (index_distance(data->b, max_index) < max_index / 2)
			rotate_b(data, 1);
		else
			r_rotate_b(data, 1);
	}
}
