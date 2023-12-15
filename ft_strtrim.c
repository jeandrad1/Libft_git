/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:48:17 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/15 23:05:23 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    int len;
    char *str;

    i = 0;
    if(!s1 || !set)
        return (0);
    while (s1[i] && ft_strchr(set, s1[i]) != '\0')
        i++;    
    len = ft_strlen(s1);   
    while (len > 0 && ft_strchr(set, s1[len -1]) != '\0')
        len--;
    str = (char *) malloc(sizeof(*str) * (len - i + 1));
    if (!str)
        return (0);
    ft_memcpy(str, s1, len);
    str[len] = '\0';
    return (str);
}

#include <stdio.h>

int main() {
    char const *s1 = "abcde98765fghijklm123abc";
    char const *set = "abc";
    char *p_trim;
    p_trim = ft_strtrim(s1, set);
    printf("test: %s\n", p_trim);
    return 0;
}