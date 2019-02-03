/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 04:19:31 by msidqi            #+#    #+#             */
/*   Updated: 2019/02/03 08:46:02 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_translate(char **argv, int pid)
{
	int j;
	int i;

	i = 0;
	while (argv[2][i])
	{
		j = 128;
		while (argv[2][i] >= 0 && j)
		{
			usleep(100);
			(argv[2][i] / j) ? kill(pid, 30) : kill(pid, 31);
			(argv[2][i] / j) ? argv[2][i] -= j : 0;
			j /= 2;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_translate(argv, ft_atoi(argv[1]));
	else
		ft_putendl("Usage : ./client <ServerPID> <Message>");
	return (0);
}
