/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:44:37 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/15 21:35:08 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stddef.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

    new_str = (char *)ft_calloc(len + 1,sizeof(char));
	if (!s)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

#include <stdio.h>
#include "libft.h"

int main(){
    char s [] = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;
    char *result = ft_substr(s, start, len);
    printf("%s\n", result);

    return 0;
}
