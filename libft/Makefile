# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msidqi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/12 11:43:36 by msidqi            #+#    #+#              #
#    Updated: 2018/10/16 23:01:49 by msidqi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FT = *.c
OBJ = *.o
CC = gcc -Wall -Wextra -Werror


all: $(NAME)

$(NAME) : 
	$(CC) -c $(FT)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
