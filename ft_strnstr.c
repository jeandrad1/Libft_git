/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:56:07 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/09 13:16:38 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*strnstr(const char *hay, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (needle[i] == '\0')
	{
		return (hay);
	}
	while (hay[i] != '\0')
	{
		j = 0;
		while (hay[i + j] != '\0' && hay[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return (&hay[i]);
			}
			++j;
		}
		++i;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	const char *haystack = "Hello, world!";
	const char *needle = "world";
	
	char *result = strstr(haystack, needle);
	
	if (result != 0)
	{
		printf("Substring found at index: %ld\n", result - haystack);
	}
	else
	{
		printf("Substring not found\n");
	}
	
	return 0;
}
*/