/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftt_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpareja- <cpareja-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:15:14 by cpareja-          #+#    #+#             */
/*   Updated: 2024/07/24 22:17:27 by cpareja-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main(void)
{
    char string[] = "Hola";
    printf("%s \n", string);
    int length = ft_strlen(string);
    printf("%d", length);
}
*/