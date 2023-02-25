/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:59:49 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/25 17:54:06 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//swap the first 2 elements of stack A
void	swap_a(t_data *data, int flag)
{
	t_stack	*forst;
	t_stack	*sekend;
	t_stack	*thurd;

	if (!data->a || !data->a->next)
		return ;
	sekend = data->a;
	forst = data->a->next;
	thurd = data->a->next->next;
	data->a = forst;
	data->a->next = sekend;
	data->a->next->next = thurd;
	data->head_a = forst;
	if (flag == 1)
		ft_putendl_fd("sa", 1);
}

//swap the first 2 elements of stack B
void	swap_b(t_data *data, int flag)
{
	t_stack	*forst;
	t_stack	*sekend;
	t_stack	*thurd;

	if (!data->b || !data->b->next)
		return ;
	sekend = data->b;
	forst = data->b->next;
	thurd = data->b->next->next;
	data->b = forst;
	data->b->next = sekend;
	data->b->next->next = thurd;
	data->head_b = forst;
	if (flag == 1)
		ft_putendl_fd("sb", 1);
}

//swap A and swap B at the same time
void	sa_sb(t_data *data)
{
	if (!data->a || !data->a->next || !data->b || data->b->next)
		return ;
	swap_a(data, 0);
	swap_b(data, 0);
	ft_putendl_fd("ss", 1);
}

//push top of stack B to top of stack A
void	push_to_a(t_data *data)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b_nxt;

	if (!data->b)
		return ;
	tmp_a = data->a;
	if (data->b)
		tmp_b_nxt = data->b->next;
	else
		tmp_b_nxt = NULL;
	data->a = data->head_b;
	data->head_a = data->a;
	data->a->next = tmp_a;
	data->b = tmp_b_nxt;
	data->head_b = data->b;
	ft_putendl_fd("pa", 1);
}

//push top of stack A to top of stack B
void	push_to_b(t_data *data)
{
	t_stack	*tmp_b;
	t_stack	*tmp_a_nxt;

	if (!data->a)
		return ;
	tmp_b = data->b;
	if (data->a)
		tmp_a_nxt = data->a->next;
	else
		tmp_a_nxt = NULL;
	data->b = data->head_a;
	data->head_b = data->b;
	data->b->next = tmp_b;
	data->a = tmp_a_nxt;
	data->head_a = data->a;
	ft_putendl_fd("pb", 1);
}
