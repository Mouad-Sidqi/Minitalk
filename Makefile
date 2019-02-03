# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msidqi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/03 08:28:02 by msidqi            #+#    #+#              #
#    Updated: 2019/02/03 09:04:08 by msidqi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: server.c client.c
	@make -C libft
	@gcc -Wall -Wextra -Werror server.c libft/libft.a -o server 
	@gcc -Wall -Wextra -Werror client.c libft/libft.a -o client
clean:
	rm -rf *.o
	make clean -C libft
fclean: clean
	rm -rf server client
	make fclean -C libft
re: fclean all 
