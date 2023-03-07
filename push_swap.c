/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:59:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/07 18:52:56 by jebucoy          ###   ########.fr       */
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

int	parser(t_stack *stack)
{
	if (check_sort(stack) == true)
	{
		printf("ERROR: Args already sorted\n");
		return (false);
	}
	if (check_dup(stack) == true)
	{
		printf("ERROR: Duplicates in argument\n");
		return (false);
	}
	return (true);
}

int	push_swap(char **av)
{
	t_data	*data;

	data = init_struct(av);
	if (parser == true)
	{ 
		char	line[256];
		while (1)
		{
			scanf("%255[^\n]%*c",line);
			if (ft_strcmp(line, "sa") == 0)
				swap_a(data, 1);
			else if (ft_strcmp(line, "sb") == 0)
				swap_b(data, 1);
			else if (ft_strcmp(line, "ss") == 0)
				sa_sb(data);
			else if (ft_strcmp(line, "pa") == 0)
				push_to_a(data);
			else if (ft_strcmp(line, "pb") == 0)
				push_to_b(data);
			else if (ft_strcmp(line, "ra") == 0)
				rotate_a(data, 1);
			else if (ft_strcmp(line, "rb") == 0)
				rotate_b(data, 1);
			else if (ft_strcmp(line, "rr") == 0)
				ra_rb(data);
			else if (ft_strcmp(line, "rra") == 0)
				r_rotate_a(data, 1);
			else if (ft_strcmp(line, "rrb") == 0)
				r_rotate_b(data, 1);
			else if (ft_strcmp(line, "rrr") == 0)
				rrr(data);
			else if (ft_strcmp(line, "exit") == 0)
				break ;
			debug_ps(*data);
		}
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
	check_invalid_arg(av);
	push_swap(av);
	return (0);
}
