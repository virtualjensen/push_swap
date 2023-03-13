/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:46:10 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/13 19:15:55 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	sort_2(t_data *data)
{
	if (ps_lst_size(data->a) == 2 && data->a->num > data->a->next->num)
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
	debug_ps(*data);
	if (ps_lst_size(data->a) == 3)
	{
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
		debug_ps(*data);
	}
}
