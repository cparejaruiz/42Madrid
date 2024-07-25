/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpareja- <cpareja-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:18:40 by cpareja-          #+#    #+#             */
/*   Updated: 2024/07/25 16:58:00 by cpareja-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	abs;

	if (nb < 0)
	{
		ft_putchar('-');
		abs = -nb;
	}
	else
	{
		abs = nb;
		if (abs > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putchar(abs + '0');
		}
	}
}

int	main(void)
{
	ft_putnbr(722);
	printf("\n");
}
