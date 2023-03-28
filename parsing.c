/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:50:07 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/28 21:35:45 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//checks for non-integers in the argument, if there is, return true
bool	check_invalid_arg(char **av)
{
	int	s;
	int	c;

	s = 1;
	c = 0;
	while (av[s])
	{
		c = 0;
		while (av[s][c])
		{
			if ((!ft_isdigit(av[s][c]) && av[s][c] != ' ' && av[s][c] != '-')
				|| (av[s][c] == '-' && !ft_isdigit(av[s][c + 1])))
			{
				return (true);
			}
			c++;
		}
		s++;
	}
	return (false);
}

//checks if args are pre-sorted, if sorted, returns true
bool	check_if_sort(t_stack *stack)
{
	t_stack	*cur;

	cur = stack;
	if (!stack)
		return (0);
	while (cur->next)
	{
		if (cur->num > cur->next->num)
			return (false);
		cur = cur->next;
	}
	return (true);
}

//checks for duplicates. if there are, return true
bool	check_if_dup(t_stack *stack)
{
	t_stack	*head;
	t_stack	*tmp;

	head = stack;
	if (!stack)
		return (0);
	while (head)
	{
		tmp = head->next;
		while (tmp)
		{
			if (head->num == tmp->num)
			{
				return (true);
			}
			tmp = tmp->next;
		}
		head = head->next;
	}
	return (false);
}

