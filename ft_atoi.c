/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:39:10 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/09 13:16:56 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	numsign;
	int	i;
	int	num;

	i = 0;
	numsign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		numsign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] <= 57 && str[i] >= 48)
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * numsign);
}

/*
#include <stdio.h>
int main(){
	printf("%d", ft_atoi(" -1234ab567"));
	return (0);
}
*/