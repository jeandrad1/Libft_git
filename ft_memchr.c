/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:54:45 by jeandrad          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/12/08 21:43:33 by jeandrad         ###   ########.fr       */
=======
/*   Updated: 2023/12/06 13:32:49 by jeandrad         ###   ########.fr       */
>>>>>>> fb86e458cadab77659c8654238c9689182309bc8
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
<<<<<<< HEAD
	const char	*str;
	size_t		i;

	i = 0;
	str = (const char *) s;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)(str + i));
		i++;
	}
	return (0);

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function declaration
void	*ft_memchr(const void *s, int c, size_t n);

int main() {
	const char *str = "Hello, World!";
	int search_char = 'o';
	size_t search_len = strlen(str);

	// Call ft_memchr function
	void *result = ft_memchr(str, search_char, search_len);

	if (result != NULL) {
		printf("Character '%c' found at index %ld\n", search_char, (char *)result - str);
	} else {
		printf("Character '%c' not found\n", search_char);
	}

	return 0;
=======
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str == (unsigned char) c)
			return (str);
		s++;
		n--;
	}
	if (*str == (unsigned char) c)
		return (str);
	return (0);

>>>>>>> fb86e458cadab77659c8654238c9689182309bc8
}
