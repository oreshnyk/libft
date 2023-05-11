# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oreshetn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 14:57:45 by oreshetn          #+#    #+#              #
#    Updated: 2023/05/05 16:00:00 by oreshetn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strlcpy.c ft_strncmp.c \
	  ft_isprint.c ft_isascii.c ft_tolower.c ft_toupper.c ft_strchr.c \
	  ft_strrchr.c ft_strlen.c ft_strlcat.c ft_memset.c ft_memcpy.c \
	  ft_memmove.c ft_memcmp.c ft_atoi.c ft_strnstr.c ft_calloc.c ft_strdup.c \
	  ft_bzero.c ft_memchr.c

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar rc libft.a *.o
	ranlib libft.a
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
