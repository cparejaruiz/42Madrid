/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpareja- <cpareja-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:53:12 by cpareja-          #+#    #+#             */
/*   Updated: 2024/07/15 15:11:01 by cpareja-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	num[] = {7, 5, 9, 1, 4};
	int	size;
	int	i;

	size = 5;
	ft_sort_int_tab(num, size);
	printf("Arreglo ordenado: ");
	i = 0;
	while (i<size)
	{
		printf("%d", num[i]);
		i++;
	}
	printf("\n");
	return(0);
}
*/