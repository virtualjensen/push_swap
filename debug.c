/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:06:17 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/21 15:42:07 by ommohame         ###   ########.fr       */
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
		printf("current A: %d\n", data.a->num);
		data.a = data.a->next;
	}
	printf("-------A END-------\n");
	printf("-------B START-----\n");
	while (data.b)
	{
		printf("current B: %d\n", data.b->num);
		data.b = data.b->next;
	}
	printf("-------B END-------\n\n");
	printf("#####################\n");
}