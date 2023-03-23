/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:46:10 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/21 14:37:59 by jebucoy          ###   ########.fr       */
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
	// debug_ps(*data);
}

t_stack	*get_min(t_data *data)
{
	t_stack *stack;
	t_stack *current;
	ssize_t min_num;
	
	stack = data->a;
	current = stack;
	min_num = INT_MAX;
	while (stack)
	{
		if (stack->num < min_num && stack->index == -1)
		{
			current = stack;
			min_num = current->num;
		}
		stack = stack->next;
	}
	return (current);
}

void get_index(t_data *data)
{
	ssize_t i;
	t_stack *min;
	ssize_t len;

	i = 0;
	len = ps_lst_size(data->a);
	while (i < len)
	{
		min = get_min(data);
		min->index = i;
		i++;
	}
}

void	check_chunk(t_data *data, ssize_t chunk_size)
{
	t_stack *stack;
	t_stack	*store_top;
	t_stack	*store_bottom;

	stack = data->a;
	if (stack->index <= chunk_size)
	{
		
	}
	
		
}

void	sort_100(t_data *data)
{
	ssize_t	i;
	t_stack *tmp;

	i = 0;
	tmp = data->a;
	while (ps_lst_size(tmp) != 0)
	{
		while (tmp)
		{
			if (tmp->index == i)
			{
				push_to_b(data);
				i++;
			}
			rotate_a(data, 1);
			tmp = tmp->next;
		}
		tmp = data->a;
	}
	while (ps_lst_size(data->b) != 0)
	{
		push_to_a(data);
	}
}



// void	sort_100(t_data *data)
// {
// 	t_stack *stack;

// 	stack = data->a;
// 	while (data->a)
// 	{
// 		current = stack;
// 		if (stack->num < )
// 	}	
// }
