/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:59:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/12 18:16:25 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
// int main(int ac, char **av)
// {
// 	t_stack	*a;
// 	t_stack *b;

// 	a->array = (int *)malloc(sizeof(int) * (ac - 1));
// 	b->array = (int *)malloc(sizeof(int) * (ac - 1));

// }

t_stack	*create_new_node(char *av)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->num = ft_atoi(av);
	new->next = NULL;
}

t_stack	*init_stack_a(char **av)
{
	int		i;
	t_stack	*a;
	t_stack	*head;

	i = 1;
	a = create_new_node(av[i]);
	head = a;
	while (av[i])
	{
		a->next = create_new_node(av[i]);
		a = a->next;
		i++;
	}
	a = head;
	return (a);
}


int main(int ac, char **av) 
{
	t_stack *a;
	int	i;

	i = 0;
	while (av[i])
	{
		a = init_stack_a(av[i]);
		printf("loop: %d\n", a);
	}
	return (0);

	// a = (t_stack *)malloc(sizeof(t_stack));
	// a->num = 0;
	// a->next = NULL;
	// head = a;
	// for ( int i = 0; i < 3; i++ )
	// {
	// 	new = (t_stack *)malloc(sizeof(t_stack));
	// 	new->num = i + 1;
	// 	new->next = NULL;
	// 	a->next = new;
	// 	a = a->next;
	// }
	// a = head;
	// while (a->next != NULL)
	// {
	// 	printf("node->n: %d\n", a->num);
	// 	a = a->next;
	// }
}