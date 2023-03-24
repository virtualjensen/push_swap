/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:28:22 by jebucoy           #+#    #+#             */
/*   Updated: 2023/03/24 15:55:31 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>


typedef struct s_stack
{
	ssize_t			num;
	ssize_t			index;
	struct s_stack	*next;
}	t_stack;

typedef struct s_data
{
	t_stack	*head_a;
	t_stack	*head_b;
	t_stack	*a;
	t_stack	*b;
}	t_data;

t_data	*init_struct(char **nbrs);
void	debug_ps(t_data data);
void	swap_a(t_data *data, int flag);
void	swap_b(t_data *data, int flag);
void	sa_sb(t_data *data);
void	push_to_a(t_data *data);
void	push_to_b(t_data *data);
t_stack	*ps_lstlast(t_stack *stack);
void	rotate_a(t_data *data, int flag);
void	rotate_b(t_data *data, int flag);
void	ra_rb(t_data *data);
void	r_rotate_a(t_data *data, int flag);
void	r_rotate_b(t_data *data, int flag);
t_stack	*lst_b4last(t_stack *stack);
void	rrr(t_data *data);
void	free_stack(t_stack *stack);
int		check_invalid_arg(char **av);
ssize_t	ps_atoss(const char *str);
ssize_t	ps_lst_size(t_stack *stack);
int		check_if_sort(t_stack *stack);
int		check_if_dup(t_stack *stack);
void	sort_2(t_data *data);
void	sort_3(t_data *data);
void	sort_4(t_data *data);
void	get_index(t_data *data);
void	chunky_sort(t_data *data, ssize_t chunk_size);
void	back_to_a(t_data *data);
bool	check_chunk(ssize_t index, ssize_t chunk_size, ssize_t chunk_index);
void	get_index(t_data *data);
t_stack	*get_min(t_data *data);
#endif