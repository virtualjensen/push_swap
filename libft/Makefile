# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/12 20:19:30 by jebucoy           #+#    #+#              #
#    Updated: 2022/06/26 21:40:42 by jebucoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CFLAGS	=	-Wall -Werror -Wextra

CC	=	gcc

SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_split.c \
			ft_itoa.c \

SRCS_B	=	ft_lstnew.c \
			ft_lstsize.c \
			ft_lstadd_front.c \
			ft_lstadd_back.c \
			ft_lstlast.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \
			

OBJS	=	$(SRCS:.c=.o)

OBJS_B	=	$(SRCS_B:.c=.o)

RM	=	rm -rf

AR 	=	ar rcs

$(NAME)	:	$(OBJS)
		$(AR) $(NAME) $(OBJS)

bonus	:	$(OBJS_B)
		$(AR) $(NAME) $(OBJS) $(OBJS_B)

all	:	$(NAME)

clean	:	
		$(RM) $(OBJS) $(OBJS_B)

fclean	:	clean 
		$(RM) $(NAME)

re	:	fclean all