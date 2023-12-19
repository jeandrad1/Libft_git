/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:47:54 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/18 20:26:33 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


//Revisar el calculo del size
#include "libft.h"
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (0);
}

int	ft_nsize(int n)
{
	int	i;
	int	isneg;
	int	aux;

	isneg = 1;
	i = 0;
	if (n < 0)
		isneg = -1;
	aux = n * isneg;
	while (ft_recursive_power(10, i) < aux)
		i++;
	return (i +1);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	i = ft_nsize(nb);
	str = (char *) malloc(sizeof(char) * + (i + 1));
	if (!str)
		return (NULL);
	str[i] = 0;
	i--;
	if (nb == 0)
		str = ft_strdup("0");
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
/*
#include <stdio.h>
#include "libft.h"

int main(){
    int num = 8745;
    char *str = ft_itoa(num);
    printf("Number: %d\nString: %s\n", num, str);
    return 0;
}
*/