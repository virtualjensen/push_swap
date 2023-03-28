/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:46:46 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/28 18:26:50 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_min(t_data *data)
{
	t_stack	*stack;
	t_stack	*current;
	ssize_t	min_num;

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

void	get_index(t_data *data)
{
	ssize_t	i;
	t_stack	*min;
	ssize_t	len;

	i = 0;
	len = ps_lst_size(data->a);
	while (i < len)
	{
		min = get_min(data);
		min->index = i;
		i++;
	}
}

bool	check_chunk(ssize_t index, ssize_t chunk_size, ssize_t chunk_index)
{
	if (index < chunk_size * (chunk_index + 1)
		&& index >= chunk_index * chunk_size)
		return (true);
	return (false);
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
