/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:22:25 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/17 11:55:28 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//creates ONE node for each num
static t_stack	*create_new_node(char *nbr)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->index = -1;	//index initialized value is -1 so that min value would be set as index[0]
	new->num = ps_atoss(nbr);
	if (new->num > INT_MAX || new->num < INT_MIN)
	{
		printf("ERROR int min/int max\n");
		exit(EXIT_FAILURE);
	}
	new->next = NULL;
	return (new);
}

void	free_2d(char **av)
{
	size_t	i;

	i = 0;
	while (av[i])
	{
		free(av[i]);
		i++;
	}
	free(av);
}

//returns the first node/ sets the value for the next nodes
static t_stack	*init_stack_a(char **nbrs)
{
	int		i;
	t_stack	*current;
	t_stack	*head;

	i = 0;
	current = create_new_node(nbrs[i]);
	head = current;
	while (nbrs[++i])
	{
		current->next = create_new_node(nbrs[i]);
		current = current->next;
	}
	return (head);
}

void	free_stack(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

//initialize the structures
t_data	*init_struct(char **nbrs)
{
	t_data	*data;
	char	**split_arg;
	int		i;

	i = 1;
	data = (t_data *)malloc(sizeof(t_data));
	if (!data)
		return (NULL);
	while (nbrs[i])
	{
		split_arg = ft_split(nbrs[i], ' ');
		if (i > 1)
		{
			ps_lstlast(data->a)->next = init_stack_a(split_arg);
		}
		else
		{
			data->a = init_stack_a(split_arg);
			data->head_a = data->a;
		}
		free_2d(split_arg);
		i++;
	}
	data->b = NULL;
	data->head_b = NULL;
	return (data);
}
