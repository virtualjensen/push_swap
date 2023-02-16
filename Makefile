# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 16:18:55 by jebucoy           #+#    #+#              #
#    Updated: 2023/02/16 22:41:49 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CFLAGS	=	-Wall -Wextra -Werror -g -fsanitize=address 

CC		=	cc

SRCS	=	push_swap.c \
			init_push_swap.c \

OBJS	=	$(SRCS:.c=.o)

all	: $(OBJS)
	make -C ./libft
	$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME)

$(NAME)	: all

clean	:
		rm -rf $(OBJS) 
		make clean -C ./libft

fclean	: clean 
		rm -rf $(NAME)
		make fclean -C ./libft


		
