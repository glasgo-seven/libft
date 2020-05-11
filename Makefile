# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/01 16:25:45 by sanakin           #+#    #+#              #
#    Updated: 2020/05/08 14:41:24 by sanakin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = libft.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) *.c $(INCLUDES)
	ar rc $(NAME) *.o
	ranlib libft.a

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	gcc -fPIC $(FLAGS) -c *.c $(INCLDUES)
	gcc -shared -o libft.so *.o 
