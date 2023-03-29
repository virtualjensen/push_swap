/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:06:17 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/29 16:05:52 by jebucoy          ###   ########.fr       */
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
	printf("#####################\n");
	printf("-------A START-------\n");
	while (data.a)
	{
		printf("current A: %zd\n", data.a->num);
		data.a = data.a->next;
	}
	printf("-------A END-------\n");
	if (data.b)
		printf("-------B START-----\n");
	while (data.b)
	{
		printf("current B: %zd\n", data.b->num);
		data.b = data.b->next;
	}
	if (data.b)
		printf("-------B END-------\n\n");
	printf("#####################\n");
}
