/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:46:10 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/29 16:01:40 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunky_sort(t_data *data, ssize_t chunk_size)
{
	ssize_t	chunk_index;
	ssize_t	counter;

	chunk_index = 0;
	counter = 0;
	while (ps_lst_size(data->a) != 0)
	{
		if (chunk_distance(data->a, chunk_size, chunk_index) == true)
			while (!check_chunk(data->a->index, chunk_size, chunk_index))
				r_rotate_a(data, 1);
		else
			while (!check_chunk(data->a->index, chunk_size, chunk_index))
				rotate_a(data, 1);
		counter++;
		if (counter == chunk_size)
		{
			counter = 0;
			chunk_index++;
		}
		push_to_b(data);
	}
	back_to_a(data);
}

ssize_t	get_least_distance(t_stack *stack, ssize_t dist1, ssize_t dist2)
{
	ssize_t	rev_dist1;
	ssize_t	rev_dist2;

	rev_dist1 = ps_lst_size(stack) - dist1;
	rev_dist2 = ps_lst_size(stack) - dist2;
	if (dist1 <= dist2 && dist1 <= rev_dist1
		&& dist1 <= rev_dist2)
		return (1);
	else if (dist2 <= dist1 && dist2 <= rev_dist2
		&& dist2 <= rev_dist1)
		return (2);
	else if (rev_dist1 <= dist2 && rev_dist1 <= dist1
		&& rev_dist1 <= rev_dist2)
		return (3);
	else
		return (4);
}

void	push_index(t_data *data, ssize_t index, bool flag)
{
	while (data->b->index != index)
	{
		if (flag == true)
			rotate_b(data, 1);
		else if (flag == false)
			r_rotate_b(data, 1);
	}
	push_to_a(data);
}

void	push_2_indices(t_data *data, ssize_t *index, bool flag)
{
	push_index(data, *index - 1, flag);
	if (index_distance(data->b, *index) < ps_lst_size(data->b) / 2)
		push_index(data, *index, true);
	else
		push_index(data, *index, false);
	swap_a(data, 1);
	*index -= 1;
}

void	back_to_a(t_data *data)
{
	ssize_t	max_index;
	ssize_t	distance_1;
	ssize_t	distance_2;

	max_index = ps_lst_size(data->b) - 1;
	while (ps_lst_size(data->b) != 1)
	{
		distance_1 = index_distance(data->b, max_index);
		distance_2 = index_distance(data->b, max_index - 1);
		if (get_least_distance(data->b, distance_1, distance_2) == 1)
			push_index(data, max_index, true);
		else if (get_least_distance(data->b, distance_1, distance_2) == 2)
			push_2_indices(data, &max_index, true);
		else if (get_least_distance(data->b, distance_1, distance_2) == 3)
			push_index(data, max_index, false);
		else if (get_least_distance(data->b, distance_1, distance_2) == 4)
			push_2_indices(data, &max_index, false);
		max_index--;
	}
	push_to_a(data);
}
