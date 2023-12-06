/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:33:17 by jeandrad          #+#    #+#             */
/*   Updated: 2023/11/30 09:33:17 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, int size)
{
	int	i;

	i = ft_strlen(src);
	if (size <= 0)
		return (i);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
/* if(dest[i] != '\0')
		dest[i] = '\0';
	*/
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
int main(){
	printf("ft_strlcpy: %d\n", ft_strlcpy("Sobreescribe", "copia", 3));
	printf("strlcpy: %d\n",ft_strlcpy("Sobreescribe","copia",3));
	return (0);
}
*/