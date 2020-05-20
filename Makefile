# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/01 16:25:45 by sanakin           #+#    #+#              #
#    Updated: 2020/05/20 12:23:13 by sanakin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = libft.h

COMPILER = gcc
FLAGS = -Wall -Wextra -Werror

SRC_MAIN_LIBC_MEM =	ft_memset.c\
					ft_bzero.c\
					ft_memcpy.c\
					ft_memccpy.c\
					ft_memmove.c\
					ft_memchr.c\
					ft_memcmp.c

SRC_MAIN_LIBC_STR =	ft_strlen.c\
					ft_strlcpy.c\
					ft_strlcat.c\
					ft_strchr.c\
					ft_strrchr.c\
					ft_strnstr.c\
					ft_strncmp.c

SRC_MAIN_LIBC_ETC =	ft_atoi.c\
					ft_isalpha.c\
					ft_isdigit.c\
					ft_isalnum.c\
					ft_isascii.c\
					ft_isprint.c\
					ft_toupper.c\
					ft_tolower.c

SRC_MAIN_LIBC_MAL =	ft_calloc.c\
					ft_strdup.c

SRC_MAIN_ADD_STR =	ft_substr.c\
					ft_strjoin.c\
					ft_strtrim.c\
					ft_split.c\
					ft_itoa.c\
					ft_strmapi.c

SRC_MAIN_ADD_PUT =	ft_putchar_fd.c\
					ft_putstr_fd.c\
					ft_putendl_fd.c\
					ft_putnbr_fd.c

SRC_BONUS_LST =		ft_lstnew.c\
					ft_lstadd_front.c\
					ft_lstsize.c\
					ft_lstlast.c\
					ft_lstadd_back.c\
					ft_lstdelone.c\
					ft_lstclear.c\
					ft_lstiter.c\
					ft_lstmap.c

all: $(NAME)

$(NAME): main

main:
	$(COMPILER) -c $(FLAGS) $(SRC_MAIN_LIBC_MEM) $(SRC_MAIN_LIBC_STR) $(SRC_MAIN_LIBC_ETC) $(SRC_MAIN_LIBC_MAL) $(SRC_MAIN_ADD_STR) $(SRC_MAIN_ADD_PUT) $(INCLUDES)
	ar rcs $(NAME) *.o
	ranlib $(NAME)

bonus:
	$(COMPILER) -c $(FLAGS) $(SRC_MAIN_LIBC_MEM) $(SRC_MAIN_LIBC_STR) $(SRC_MAIN_LIBC_ETC) $(SRC_MAIN_LIBC_MAL) $(SRC_MAIN_ADD_STR) $(SRC_MAIN_ADD_PUT) $(SRC_BONUS_LST) $(INCLUDES)
	ar rcs $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(COMPILER) -fPIC $(FLAGS) -c *.c $(INCLDUES)
	$(COMPILER) -shared -o libft.so *.o 

.PHONY: all clean fclean re so
