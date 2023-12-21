/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:44:37 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/21 18:52:42 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	new_str = (char *) malloc (sizeof(*s) *(len + 1));
	if (!s || !new_str)
		return (NULL);
	while (i < ft_strlen(s) && j < len && s)
	{
		new_str[j++] = s[i++];
	}
	new_str[j] = '\0';
	return (new_str);
}

#include <stdio.h>
#include "libft.h"

int main(){
    char s [] = "Test4TestingEnd";
    unsigned int start = 5;
    size_t len = 15;
    char *result = ft_substr(s, start, len);
    printf("%s\n", result);

    return 0;
}
