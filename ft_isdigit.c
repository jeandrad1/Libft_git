/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:06:02 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/02 17:05:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>
int main(){
	printf("ft_isdigit: %i\n",ft_isdigit('1'));
	printf("isdigit: %i\n", isdigit('1'));
	return (0);
}