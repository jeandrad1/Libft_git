/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:30:52 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/05 23:03:44 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stddef.h>
/*
void ft_bzero(void *str, size_t n)
{
	size_t	i;
	char *s;

	s = (char *)str;
	i = 0;
	while (n > 0)
	{
		*s = 0;
		s++;
		n--;
	}
}
*/
/*
void    ft_bzero(void *s, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        ((char *)s)[i] = '\0';
        i++;
    }
}
*/
/*
#include "libft.h"

void				ft_bzero(void *b, size_t n)
{
	unsigned char	* dest;
	size_t			i;

	dest = (unsigned char *) b;
	i = 0;
	while (i++ < n)
		*dest++ = 0;
}
*/
#include <stdio.h>
#include <string.h>
int main() {
	char s[] = "Esto todo hay que borrarlo.";
	printf("%s\n", s);
	memset(s, '\0', 2);
	printf("%s\n", s);
	return 0;
}
