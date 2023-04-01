/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:50:07 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/29 15:57:45 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	verify_num(char **av)
{
	int	s;
	int	c;

	s = 0;
	while (av[s])
	{
		c = 1;
		if ((av[s][0] != '-' && !ft_isdigit(av[s][0]))
			|| (av[s][0] == '-' && !ft_isdigit(av[s][1])))
			return(false);
		while (av[s][c])
		{
			if(!ft_isdigit(av[s][c]))
				return (false);			
			c++;
		}
		s++;
	}
	return (true);
}

//checks for non-integers in the argument, if there is, return true
bool	check_invalid_arg(char **av)
{
	int	s;
	int	c;

	s = 0;
	c = 0;
	if (!verify_num(av))
		return (true);
	while (av[s])
	{
		c = 0;
		if (av[s][c] == '\0')
			return (true);
		while (av[s][c])
		{
			if ((!ft_isdigit(av[s][c]) && av[s][c] != ' ' && av[s][c] != '-'))
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
