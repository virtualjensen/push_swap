/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:59:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/28 21:34:36 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	parser(t_stack *stack, char **av)
{
	if ((check_invalid_arg(av) == true)
		|| (check_if_dup(stack) == true))
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
	if (parser(data->a, av) == true)
	{
		get_index(data);
		if (ps_lst_size(data->a) == 2)
			sort_2(data);
		else if (ps_lst_size(data->a) == 3)
			sort_3(data);
		else if (ps_lst_size(data->a) == 4)
			sort_4(data, 0);
		else if (ps_lst_size(data->a) == 5)
			sort_5(data);
		else if (ps_lst_size(data->a) <= 100)
			chunky_sort(data, 20); //16
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
	if (ac < 3)
		return (0);
	push_swap(av);
	return (0);
}
