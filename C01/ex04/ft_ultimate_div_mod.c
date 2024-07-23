/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpareja- <cpareja-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:26:24 by cpareja-          #+#    #+#             */
/*   Updated: 2024/07/15 15:10:27 by cpareja-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;
	int	aux2;

	aux = *a / *b;
	aux2 = *a % *b;
	*a = aux;
	*b = aux2;
}
/*
int main(void)
{
    int a = 12;
    int b = 26;
    printf("a = %d y b = %d", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("a = %d y b = %d", a, b);
}
*/