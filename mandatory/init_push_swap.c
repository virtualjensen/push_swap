/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:22:25 by jebucoy           #+#    #+#             */
/*   Updated: 2023/04/03 16:29:17 by jebucoy          ###   ########.fr       */
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
	new->index = -1;
	new->num = ps_atoss(nbr);
	if (new->num > INT_MAX || new->num < INT_MIN)
	{
		free(new);
		ft_putendl_fd("Error", 2);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}

//returns the first node/ sets the value for the next nodes
static t_stack	*init_stack_a(char **nbrs, t_data *data)
{
	int		i;
	t_stack	*current;
	t_stack	*head;

	i = 0;
	current = create_new_node(nbrs[i]);
	if (current == NULL)
		free_stack_a(nbrs, data->a, data);
	head = current;
	while (nbrs[++i])
	{
		current->next = create_new_node(nbrs[i]);
		if (current->next == NULL)
			free_stack_a(nbrs, current, data);
		current = current->next;
	}
	return (head);
}

//initialize the structures
t_data	*init_struct(char **nbrs)
{
	t_data	*data;
	char	**split_arg;
	int		i;

	i = 1;
	data = (t_data *)ft_calloc(sizeof(t_data), 1);
	if (!data)
		return (NULL);
	while (nbrs[i])
	{
		split_arg = ft_split(nbrs[i], ' ');
		check_split(split_arg, data);
		if (i > 1)
			ps_lstadd_back(data->a, init_stack_a(split_arg, data));
		else
		{
			data->a = init_stack_a(split_arg, data);
			data->head_a = data->a;
		}
		free_2d(split_arg);
		i++;
	}
	data->b = NULL;
	data->head_b = NULL;
	return (data);
}
