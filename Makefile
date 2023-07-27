# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oreshetn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 14:57:45 by oreshetn          #+#    #+#              #
#    Updated: 2023/06/02 13:06:01 by oreshetn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[0;92m
CYAN = \033[0;96m
DEFAULT = \033[0;39m
BLUE = \033[0;94m

NAME	= libft.a
BNS	= .bonus

HEADER	= libft.h
INCLUDE = -I ./

CFLAGS	= -Wall -Wextra -Werror
NORM	= norminette -R CheckForbiddenSourceHeader
RM		= rm -f
AR		= ar -rcs

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strlcpy.c ft_strncmp.c \
      ft_isprint.c ft_isascii.c ft_tolower.c ft_toupper.c ft_strchr.c \
      ft_strrchr.c ft_strlen.c ft_strlcat.c ft_memset.c ft_memcpy.c \
      ft_memmove.c ft_memcmp.c ft_atoi.c ft_strnstr.c ft_calloc.c ft_strdup.c \
      ft_bzero.c ft_memchr.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c \
      ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strjoin.c  \
      ft_split.c ft_itoa.c ft_strmapi.c ft_strtrim.c \
	  ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	  ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c
	  
S_OBJ = $(SRC:.c=.o)
BSRC_OBJ = $(BSRC:.c=.o)

all: $(NAME)

%.o : %.c Makefile
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	@echo "$(GREEN)Compiling $<...$(DEFAULT)"

$(NAME) : $(S_OBJ)
	@$(AR) $(NAME) $(S_OBJ)
	@echo "$(BLUE)Library compiled successfully!$(DEFAULT)"

bonus: $(BNS)

$(BNS): $(S_OBJ) $(BSRC_OBJ)
	@$(AR) $(NAME) $(S_OBJ) $(BSRC_OBJ)
	@echo "$(CYAN)Bonus part of library compiled successfully!$(DEFAULT)"
	@touch $@

clean:
	@$(RM) $(S_OBJ) $(BSRC_OBJ) 
	
fclean: clean
	@$(RM) $(NAME) $(BNS)

re: fclean all

norm:
	$(NORM)

.PHONY: all clean fclean re norm bonus
