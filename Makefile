# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekeen-wy <ekeen-wy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/15 10:06:07 by ekeen-wy          #+#    #+#              #
#    Updated: 2021/11/01 14:29:21 by ekeen-wy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

cc = gcc

CFLAGS = -Wall -Wextra -Werror

DEPS = libft.h

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	  ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_atoi.c \
	  ft_memset.c ft_memcpy.c ft_memmove.c
	  
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar csr $(NAME) $(OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

fclean: clean 
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re 