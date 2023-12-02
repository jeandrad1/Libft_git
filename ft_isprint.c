/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:14:48 by jeandrad          #+#    #+#             */
/*   Updated: 2023/11/28 10:14:48 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
	int i = 0;
	while (i < 250)
	{
		printf("For %i ft_isprint: %i\t",i, ft_isprint(i));
		printf("For %i isprint: %i\n",i, isprint(i));
		i++;
	}
	return (0);
}
