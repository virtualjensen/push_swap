/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:59:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/19 21:43:32 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(char **av)
{
	t_data	*data;

	data = init_struct(av);
	// debug_ps(*data);
	// push_to_b(data);
	// push_to_b(data);
	// push_to_b(data);
	// debug_ps(*data);
	r_rotate_b(data, 1);
	// debug_ps(*data);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	push_swap(av);
	return (0);
}

	// printf("last node: %d\n", ps_lstlast(save->a)->num);
	// printf("last node: %d\n", (save->a)->num);
	// printf("node value: %d\n", save->a->num);
