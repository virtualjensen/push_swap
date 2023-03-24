/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:59:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/24 15:55:08 by jebucoy          ###   ########.fr       */
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
		|| (check_if_sort(stack) == true)
		|| (check_if_dup(stack) == true))
	{
		ft_putendl_fd("ERROR", 2);
		return (false);
	}
	return (true);
}

int	push_swap(char **av)
{
	t_data	*data;

	data = init_struct(av);
	if (parser(data->a, av) == true)
	{
	// debug_ps(*data);
		get_index(data);
		if (ps_lst_size(data->a) == 2)
			sort_2(data);
		else if (ps_lst_size(data->a) == 3)
			sort_3(data);
		else if (ps_lst_size(data->a) == 4)
			sort_4(data);
		else if (ps_lst_size(data->a) <= 100)
			chunky_sort(data, 11);
		else
			chunky_sort(data, 51);
	}
	// debug_ps(*data);
	free_stack(data->a);
	free_stack(data->b);
	free(data);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	push_swap(av);
	return (0);
}

/*9 29 21 75 26 37 82 24 55 80 36 96 31 81 28 20 39 2 45 92 58 95 77 88 27 51 16 44 47 94 90 71 79 11 83 3 60 78 66 59 25 86 49 7 33 19 46 87 6 63 12 52 97 69 64 32 76 89 93 41 17 68 14 1 38 22 57 74 35 99 67 73 5 18 34 62 85 13 43 72 98 100 65 23 70 30 42 10 15 4 53 91 48 84 56 61 54 40 8 50*/