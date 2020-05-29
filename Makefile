# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/01 16:25:45 by sanakin           #+#    #+#              #
#    Updated: 2020/05/27 15:57:58 by sanakin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = libft.h

COMPILER = gcc
FLAGS = -Wall -Wextra -Werror

SRC_MAIN_LIBC =		ft_memset.c\
					ft_bzero.c\
					ft_memcpy.c\
					ft_memccpy.c\
					ft_memmove.c\
					ft_memchr.c\
					ft_memcmp.c\
					ft_strlen.c\
					ft_strlcpy.c\
					ft_strlcat.c\
					ft_strchr.c\
					ft_strrchr.c\
					ft_strnstr.c\
					ft_strncmp.c\
					ft_atoi.c\
					ft_isalpha.c\
					ft_isdigit.c\
					ft_isalnum.c\
					ft_isascii.c\
					ft_isprint.c\
					ft_toupper.c\
					ft_tolower.c\
					ft_calloc.c\
					ft_strdup.c

SRC_MAIN_ADD =		ft_substr.c\
					ft_strjoin.c\
					ft_strtrim.c\
					ft_split.c\
					ft_itoa.c\
					ft_strmapi.c\
					ft_putchar_fd.c\
					ft_putstr_fd.c\
					ft_putendl_fd.c\
					ft_putnbr_fd.c

SRC_BONUS =			ft_lstnew.c\
					ft_lstadd_front.c\
					ft_lstsize.c\
					ft_lstlast.c\
					ft_lstadd_back.c\
					ft_lstdelone.c\
					ft_lstclear.c\
					ft_lstiter.c\
					ft_lstmap.c

OBJ_MAIN = $(SRC_MAIN_LIBC:.c=.o)
OBJ_MAIN += $(SRC_MAIN_ADD:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)


all: $(NAME)

$(NAME): $(OBJ_MAIN)
	ar rc $(NAME) $?
	ranlib $(NAME)

bonus: $(OBJ_BONUS)
	ar rc $(NAME) $?
	ranlib $(NAME)

%.o: %.c $(INCLUDES)
	$(COMPILER) -c $(FLAGS) $< -o $@

clean:
	rm -f $(OBJ_MAIN)
	rm -f $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)
	rm -f libft.so

re: fclean all

so:
	$(COMPILER) -fPIC -shared $(OBJ_MAIN) $(OBJ_BONUS) -o libft.so

.PHONY: all clean fclean re so bonus
