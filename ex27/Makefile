# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 17:46:03 by aguiot--          #+#    #+#              #
#    Updated: 2018/11/06 19:00:22 by aguiot--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CFLAGS += -Wall -Wextra -Werror
HEADERS = includes/
SRC = srcs/main.c \
	  srcs/ft_putchar.c \
	  srcs/ft_putstr.c
OBJ = main.o \
	  ft_putchar.o \
	  ft_putstr.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -I $(HEADERS) -c $(SRC)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
