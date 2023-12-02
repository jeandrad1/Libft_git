/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:27:27 by jeandrad          #+#    #+#             */
/*   Updated: 2023/11/28 10:27:27 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_strlen(char *str)
{
	unsigned long int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
#include <stdio.h>
#include <string.h>
int main()
{
	printf("Length: %lu\n", ft_strlen("kjhgfd"));
	printf("Length: %lu\n", strlen("kjhgfd"));	
	return (0);
}