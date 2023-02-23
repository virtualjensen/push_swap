/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:22:25 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/21 16:47:20 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t	ps_atoss(const char *str)
{
	ssize_t	i;
	ssize_t	s;
	ssize_t	n;

	i = 0;
	s = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		if (i > 12)
			return ((ssize_t)INT_MAX + 1);
		n = n * 10 + (str[i++] - 48);
	}
	
	return (n * s);
}

//creates ONE node for each num
static t_stack	*create_new_node(char *nbr)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->num = ps_atoss(nbr);
	if (new->num > INT_MAX || new->num < INT_MIN)
		{
			printf("ERROR int min/int max\n");
			exit(EXIT_FAILURE);
		}
	new->next = NULL;
	return (new);
}

//returns the first node/ sets the value for the next nodes
static t_stack	*init_stack_a(char **nbrs)
{
	int		i;
	t_stack	*current;
	t_stack	*head;

	i = 1;
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

	data = (t_data *)malloc(sizeof(t_data));
	if (!data)
		return (NULL);
	data->a = init_stack_a(nbrs);
	data->head_a = data->a;
	data->b = NULL;
	data->head_b = NULL;
	return (data);
}
