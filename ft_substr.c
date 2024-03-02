/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:44:37 by jeandrad          #+#    #+#             */
/*   Updated: 2024/03/02 14:17:13 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	i;
	size_t			j;
	size_t			m_len;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		m_len = 0;
	else
		m_len = ft_strlen(s) - start;
	if (len > m_len)
		len = m_len;
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	while ((i < ft_strlen(s)) && (j < len))
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}
