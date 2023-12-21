/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:52:49 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/21 13:52:49 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	aux;

	i = 0;
	if (n < 0)
	{
		aux = -1 * n;
		while (ft_recursive_power(10, i) <= aux)
			i++;
		return (i + 1);
	}
	else
	{
		while (ft_recursive_power(10, i) <= n)
			i++;
		return (i);
	}
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
    int num = -100;
	while (num < 100){
		char *str = ft_itoa(num);
    	printf("Number: %d\tString: %s\t", num, str);
		printf("S Size: %d\n", ft_strlen(str));
		num+=10;
	}
    return 0;
}
*/