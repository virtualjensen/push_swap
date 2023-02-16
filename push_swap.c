/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:59:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/16 23:04:42 by jebucoy          ###   ########.fr       */
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

// void	print_a(t_stack a)
// {
// 	while(1)
// 	{
// 		printf("current: %d\n", a.num);
// 		if (a.next != 0)
// 			printf("next: %d\n", a.next->num);
// 		a.num = -69;
// 		if (a.next == NULL)
// 			break ;
// 		a = *(a.next);
// 	}
// }

void	debug_ps(t_data data)
{
	// print_a(*data.a);
	while (data.a)
	{
		printf("current: %d\n", data.a->num);
		if (data.a->next != 0)
			printf("next: %d\n", data.a->next->num);
		data.a = data.a->next;
	}
}

int	push_swap(char **av)
{
	t_data	*save;

	save = init_struct(av);
	debug_ps(*save);
	debug_ps(*save);
	return (0);
}

int main(int ac, char **av) 
{
	if (ac == 1)
		return (0);
	push_swap(av);
	return (0);
}















	// while (a != NULL)
	// {
	// 	printf("current: %d\n", a->num);
	// 	if (a->next != NULL)
	// 		printf("c->next: %d\n", a->next->num);
	// 	a = a->next;
	// }
	// a = head;
	// while (a != NULL)
	// {
	// 	printf("2_current: %d\n", a->num);
	// 	if (a->next != NULL)
	// 		printf("2_c->next: %d\n", a->next->num);
	// 	a = a->next;
	// }