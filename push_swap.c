/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:59:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/29 17:51:03 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parser(t_stack *stack)
{
	if ((check_if_dup(stack) == true))
	{
		ft_putendl_fd("Error", 2);
		return (false);
	}
	if (check_if_sort(stack) == true)
		return (false);
	return (true);
}

int	push_swap(char **av)
{
	t_data	*data;

	data = init_struct(av);
	if (parser(data->a) == true)
	{
		get_index(data);
		if (ps_lst_size(data->a) == 2)
			swap_a(data, 1);
		else if (ps_lst_size(data->a) == 3)
			sort_3(data);
		else if (ps_lst_size(data->a) == 4)
			sort_4(data, 0);
		else if (ps_lst_size(data->a) == 5)
			sort_5(data);
		else if (ps_lst_size(data->a) <= 100)
			chunky_sort(data, 20);
		else
			chunky_sort(data, 40);
	}
	free_stack(data->a);
	free_stack(data->b);
	free(data);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	push_swap(av);
	return (0);
}
