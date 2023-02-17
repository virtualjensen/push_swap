/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:59:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/17 22:41:32 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(char **av)
{
	t_data	*save;

	save = init_struct(av);
	debug_ps(*save);
	push_b(save);
	debug_ps(*save);
	push_a(save);
	debug_ps(*save);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	push_swap(av);
	return (0);
}
