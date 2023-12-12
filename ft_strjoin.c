/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:57:00 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/12 23:03:43 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t i;
    int len;

    len = ft_strlen(s1) + ft_strlen(s2);
    i = 0;
    if (!str || !(str = (char *)malloc(len +1)))
        return (NULL);
    while (i < ft_lens(s1) && s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    i = 0;
    while (i < ft_lens(s2) && s2[i])
    {
        str[ft_len(s1) + i] = s2[i];
        i++;
    }
    str[ft_len(s1) + i] = '\0';
    return (str);
}

#include <stdio.h>
#include "libft.h"

int main(void){
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result = ft_strjoin(s1, s2);
    
    printf("%s\n", result);
    
    return 0;
}
