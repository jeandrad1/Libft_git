/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:30:57 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/09 11:37:15 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ds;

	ds = dst;
	while (n > 0)
	{
		ds = src;
		ds++;
		src++;
		n--;
	}
	return (dst);
}