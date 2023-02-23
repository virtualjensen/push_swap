# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 16:18:55 by jebucoy           #+#    #+#              #
#    Updated: 2023/02/21 16:22:47 by ommohame         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CFLAGS	=	-Wall -Wextra -Werror -g #-fsanitize=address 

CC		=	cc

SRCS	=	push_swap.c \
			init_push_swap.c \
			debug.c \
			operations/swap_push.c \
			operations/rotate.c \
			operations/r_rotate.c \
			parsing.c \

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

re	: fclean all	

		
