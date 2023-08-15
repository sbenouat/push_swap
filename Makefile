# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 05:14:01 by sbenouat          #+#    #+#              #
#    Updated: 2023/08/15 05:14:25 by sbenouat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRCS = main.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
LIBPRINTF_DIR = ./printf
LIBPRINTF_INC = -I$(LIBPRINTF_DIR)
LIBPRINTF_FLAGS = -L$(LIBPRINTF_DIR) -lftprintf

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBPRINTF_DIR)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIBPRINTF_FLAGS)

%.o: %.c
	$(CC) $(CFLAGS) $(LIBPRINTF_INC) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)
	$(MAKE) clean -C $(LIBPRINTF_DIR)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIBPRINTF_DIR)

re: fclean all

.PHONY: all clean fclean re
