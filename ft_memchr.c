/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 22:27:26 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/05 22:33:56 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdio.h>

void *memchr(const void *str, int c, size_t n)
{
    size_t i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)&str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

int main()
{
	char str[] = "Test of the code";
	int n = sizeof(str) - 1;
	char c = 'o';

	void *result = memchr(str, c, n);

	if (result != NULL)
	{
		printf("Character '%c' found at index %ld\n", c, (char *)result - str);
	}
	else
	{
		printf("Character '%c' not found\n", c);
	}
	return (0);
}
