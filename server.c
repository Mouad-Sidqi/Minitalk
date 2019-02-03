/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 04:20:13 by msidqi            #+#    #+#             */
/*   Updated: 2019/02/03 09:10:03 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char			g_bits[BUFF_SIZE2];

void			ft_sigman(int sig)
{
	if (sig == 31)
		ft_strcat(g_bits, "0");
	else if (sig == 30)
		ft_strcat(g_bits, "1");
}

static int		ft_atoi_b(void)
{
	int result;

	result = (g_bits[0] - 48) * 128 + (g_bits[1] - 48) * 64
		+ (g_bits[2] - 48) * 32 + (g_bits[3] - 48) * 16 + (g_bits[4] - 48) *
		8 + (g_bits[5] - 48) * 4 + (g_bits[6] - 48) * 2 + (g_bits[7] - 48);
	return (result);
}

int				main(void)
{
	int i;

	i = 0;
	g_bits[BUFF_SIZE2 - 1] = '\0';
	ft_putnbr(getpid());
	while (1)
	{
		signal(SIGUSR1, ft_sigman);
		signal(SIGUSR2, ft_sigman);
		pause();
		i++;
		if (i == 8)
		{
			i = 0;
			ft_putchar(ft_atoi_b());
			ft_bzero(g_bits, 8);
		}
	}
	return (0);
}
