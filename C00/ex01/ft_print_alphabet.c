/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpareja- <cpareja-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:10:25 by cpareja-          #+#    #+#             */
/*   Updated: 2024/07/09 12:55:20 by cpareja-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	a;
	int	z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		write(1, &a, 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/