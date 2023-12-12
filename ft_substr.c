/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:44:37 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/12 23:03:49 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stddef.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    i = 0;
    if (!s || !(str = (char *)malloc(len + 1)))
        return (NULL);
    while (i < len && s[start])
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);   
}

#include <stdio.h>
#include "libft.h"

int main(){
    char *s = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;
    char *result = ft_substr(s, start, len);
    printf("%s\n", result);

    return 0;
}
