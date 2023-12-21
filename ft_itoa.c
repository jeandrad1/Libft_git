/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:52:49 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/21 20:00:33 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdlib.h>
/*
static int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (0);
}

static int	ft_nsize(int n)
{
	int			i;
	long int	aux;

	i = 0;
	aux = n;
	if (n < 0)
	{
		aux = -1 * aux;
		while (ft_recursive_power(10, i) <= aux)
			i++;
		return (i + 1);
	}
	else
	{
		while (ft_recursive_power(10, i) <= aux)
			i++;
		return (i);
	}
}
*/

static int	ft_nsize(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		nb;
	i = ft_nsize(nb);
	nb = n;
	if (n == -2147483648)
	return (ft_strdup("-2147483648"));
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


#include <stdio.h>
#include <limits.h>
#include "libft.h"

int main(){
    int num = INT_MIN;
	//while (num <= INT_MAX){
		
		char *str = ft_itoa(num);
    	printf("Number: %d\tString: %s\t", num, str);
		printf("S Size: %d\n", ft_strlen(str));

		//num+=1000000000;
//	}
    return 0;
}
