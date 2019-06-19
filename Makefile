# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgontier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/12 10:58:54 by tgontier          #+#    #+#              #
#    Updated: 2018/10/17 14:07:11 by tgontier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isdigit.c \
	  ft_strchr.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strdup.c \
	  ft_strcmp.c \
	  ft_memset.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strlen.c \
	  ft_isascii.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_strcat.c \
	  ft_isprint.c \
	  ft_strstr.c \
	  ft_bzero.c \
	  ft_atoi.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_memchr.c \
	  ft_memmove.c \
	  ft_strncat.c \
	  ft_memcmp.c \
	  ft_strlcat.c \
	  ft_strncmp.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_strclr.c \
	  ft_memalloc.c \
	  ft_strnew.c \
	  ft_putendl.c \
	  ft_putendl_fd.c \
	  ft_itoa.c \
	  ft_strrev.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_strdel.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strjoin.c \
	  ft_memdel.c \
	  ft_strmapi.c \
	  ft_strsplit.c \
	  ft_strsub.c \
	  ft_strtrim.c \
	  get_next_line.c \

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
