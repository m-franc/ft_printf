# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfranc <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/17 20:53:55 by mfranc            #+#    #+#              #
#    Updated: 2017/01/17 21:07:44 by mfranc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf_test

FLAGS = -fsanitize=address

CC = gcc $(FLAGS)

PATH_LIB = ../libft/

LIBFT = $(PATH_LIB)libftprintf.a

SRCS = main_printf.c

OBJS = main_printf.o

all: $(NAME)

$(LIBFT): 
	@make -C $(PATH_LIB)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $< -o $@ -I $(PATH_LIB)

clean:
	@make clean -C $(PATH_LIB)
	rm -f $(OBJS)

fclean: clean
	@make fclean -C $(PATH_LIB)
	rm -f $(NAME)

re: fclean all
