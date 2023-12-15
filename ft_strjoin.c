/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:57:00 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/15 23:39:17 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int len;

	len = ft_strlen(s1) +ft_strlen(s2);
	str = (char *)malloc (sizeof(* str) * (len + 1));
	if (!str)
        return (0);
	ft_strlcpy(str,s1,ft_strlen(s1)+1);
	ft_strlcat(str,s2,ft_strlen(s2)+1);
    return (str);
}

#include <stdio.h>
#include "libft.h"

int main(void){
    char s1 [] = "Hello,";
    char s2 [] = " world!";
    char *result = ft_strjoin(s1, s2);
    printf("%s\n", result);
    return 0;
}
