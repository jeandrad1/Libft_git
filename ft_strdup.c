/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:38:29 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/12 23:03:46 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdlib.h>

char	*strdup (const char *s1)
{
	size_t  i;
    size_t  len;
    char    *dup;

	len = ft_strlen(s1);
	dup = (char *)malloc(sizeof(const char) * (len + 1));
    if(!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

#include <stdio.h>

/*
int main(){
	const char *str = "Hello, world!";
	char *dup_str = ft_strdup(str);
	printf("%s\n", dup_str);
	free(dup_str);
	return 0;
}
*/