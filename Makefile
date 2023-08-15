# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 05:14:01 by sbenouat          #+#    #+#              #
#    Updated: 2023/08/15 06:17:35 by sbenouat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRCS = main.c args.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
LIBPRINTF_DIR = ./printf
LIBPRINTF_INC = -I$(LIBPRINTF_DIR)
LIBPRINTF_FLAGS = -L$(LIBPRINTF_DIR) -lftprintf

$(NAME): make_libprintf $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIBPRINTF_FLAGS)

%.o: %.c
	$(CC) $(CFLAGS) $(LIBPRINTF_INC) -c $< -o $@

make_libprintf:
	$(MAKE) -C $(LIBPRINTF_DIR)

all: $(NAME)

clean:
	rm -f $(OBJS)
	$(MAKE) clean -C $(LIBPRINTF_DIR)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIBPRINTF_DIR)

re: fclean all

.PHONY: all clean fclean re
