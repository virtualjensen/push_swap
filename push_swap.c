/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:59:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/13 17:06:29 by jebucoy          ###   ########.fr       */
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

//creates ONE node for each num
t_stack	*create_new_node(char *nbr)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->num = ft_atoi(nbr);
	new->next = NULL;
	return (new);
}

//returns the first node/ sets the value for the next nodes
t_stack	*init_stack_a(char **nbrs)
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
/**
 a     a->next
---    ---
|2| -> |3|
---    ---
**/

// current = 1;
// c->next = 2;
// current = 2;
// c->next = 3;
// current = 3;
// c->next = NULL;

int main(int ac, char **av) 
{
	t_stack	*a;
	t_stack	*head;
	int		i;

	i = 0;
	if (ac > 2)
	{
		a = init_stack_a(av);
		head = a;
		while (a != NULL) //&& a->next != NULL)
		{
			printf("current: %d\n", a->num);
			if (a->next != NULL)
				printf("c->next: %d\n", a->next->num);
			a = a->next;
		}
		a = head;
		while (a != NULL)
		{
			printf("2_current: %d\n", a->num);
			if (a->next != NULL)
				printf("2_c->next: %d\n", a->next->num);
			a = a->next;
		}
	}
	return (0);
}