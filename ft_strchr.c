/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:52:42 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/05 22:26:34 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char*)&str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
	const char *str = "Find h here.";
	int c = 'h';
	
	char *result = ft_strchr(str, c);
	
	if (result != NULL)
		printf("Character '%c' found at position: %ld\n", c, result - str);
	else
		printf("Character '%c' not found\n", c);
	
	return 0;
}
*/