/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:59:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/13 17:09:59 by jebucoy          ###   ########.fr       */
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
	if (check_invalid_arg(av) == true)
	{
		ft_putendl_fd("ERROR: Invalid Arguments", 2);
		return (false);
	}
	if (check_if_sort(stack) == true)
	{
		ft_putendl_fd("ERROR: Args already sorted", 2);
		return (false);
	}
	if (check_if_dup(stack) == true)
	{
		ft_putendl_fd("ERROR: Duplicates in argument", 2);
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
		sort_3(data);
	}
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
