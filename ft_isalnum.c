/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:21:27 by jeandrad          #+#    #+#             */
/*   Updated: 2023/11/28 10:21:27 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
/*
	if (c >= '0' && c <= '9')
*/
	if(ft_isdigit(c))
		return (1);
	if (c <= 'z' && c >= 'a')
		return (1);
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("ft_isalnum: %i\n", ft_isalnum('k'));
	printf("isalnum: %i\n", isalnum('k'));
	return (0);
}
