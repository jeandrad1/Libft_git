/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:45:17 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/05 11:48:58 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stddef.h>
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int r;
	int i;

	r = 0;
	i = 0;
	while (str2[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i]){
			r = str1[i] - str2[i];
			if (r < 0){
				return (-1);
			}
			if (r > 0){
				return (1);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void) {
	const char *str1 = "Hello";
	const char *str2 = "Hello";
	int result = ft_strncmp(str1, str2, 3);
	
	printf("Result: %d\n", result);
	
	return 0;
}
*/