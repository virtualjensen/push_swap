/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:28:22 by jebucoy           #+#    #+#             */
/*   Updated: 2023/02/17 22:19:03 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	int				num;
	struct	s_stack	*next;
}	t_stack;

typedef struct s_data
{
	t_stack	*head_a;
	t_stack *head_b;
	t_stack *a;
	t_stack *b;
}	t_data;

t_data	*init_struct(char **nbrs);
void	debug_ps(t_data data);
void	swap_a(t_data *data, int flag);
void	swap_b(t_data *data, int flag);
void	sa_sb(t_data *data);
void	push_a(t_data *data);
void	push_b(t_data *data);
#endif