/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:23:51 by jeandrad          #+#    #+#             */
/*   Updated: 2023/11/27 12:42:44 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("ft_isalpha: %i\n", ft_isalpha('h'));
	printf("isalpha: %i\n", isalpha('h'));
	return (0);
}