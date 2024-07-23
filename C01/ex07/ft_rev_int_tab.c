/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpareja- <cpareja-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:34:11 by cpareja-          #+#    #+#             */
/*   Updated: 2024/07/15 15:10:53 by cpareja-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	aux;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		aux = tab[a];
		tab[a] = tab[b];
		tab[b] = aux;
		a++;
		b--;
	}
}

/*
int main()
{
    
    int tab[]= {4, 9,6,8};
    int size = 4; 
    
    printf("Antes ");
    for (int i =0; i<size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    
    ft_rev_int_tab(tab,size);
    
    printf("Después ");
    for (int i =0; i<size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    
    return 0;
}
*/
