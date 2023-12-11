/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:56:07 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/11 23:17:03 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *hays, const char *needle, size_t len)
{
	size_t	lit_len;
	size_t	hays_len;
	size_t	size;

	if (*needle == '\0')
		return ((char *)hays);
	lit_len = ft_strlen(needle);
	hays_len = ft_strlen(hays);
	if (hays_len < lit_len || len < lit_len)
		return (0);
	if (hays_len > len)
		size = len;
	else
		size = hays_len;
	while (size-- >= lit_len)
	{
		if (ft_memcmp(hays, needle, lit_len) == 0)
			return ((char *)hays);
		hays++;
	}
	return (0);
}

#include <stdio.h>

int main()
{
	const char *haystack = "Hello, world!";
	const char *needle = "world";
	
	char *result = ft_strnstr(haystack, needle, 13);
	
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
