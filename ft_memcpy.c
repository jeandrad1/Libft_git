/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:30:57 by jeandrad          #+#    #+#             */
/*   Updated: 2024/03/02 13:07:59 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void	*dest, void const *src, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;
	size_t	i;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		*(dest_ptr + i) = *(src_ptr + i);
		i++;
	}
	return (dest_ptr);
}
