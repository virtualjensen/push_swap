/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:06:17 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/19 17:34:08 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	while (data.a)
	{
		printf("current A: %d\n", data.a->num);
		data.a = data.a->next;
	}
	printf("-------A END-------\n\n");
	while (data.b)
	{
		printf("current B: %d\n", data.b->num);
		data.b = data.b->next;
	}
	printf("-------B END-------\n\n");
}