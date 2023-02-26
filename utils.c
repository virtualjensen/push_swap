/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:05:21 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/25 18:40:23 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ascii to signed long (ssize_t) to avoid buffer overflow for int min/int max
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

t_stack	*ps_lstlast(t_stack *stack)
{
	t_stack	*ret;

	if (!stack)
		return (NULL);
	ret = stack;
	while (ret->next)
	{
		ret = ret->next;
	}
	return (ret);
}

ssize_t	ps_lst_size(t_stack *stack)
{
	ssize_t	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);	
}
