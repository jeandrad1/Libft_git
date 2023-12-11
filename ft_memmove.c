/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:40:35 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/11 23:02:41 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n) {
    char *d;
    const char *s;

    d = (char *) dest;
    s = (char *) src;
    if (d < s) {
        for (size_t i = 0; i < n; i++) {
            d[i] = s[i];
        }
    } else {
        for (size_t i = n; i > 0; i--) {
            d[i - 1] = s[i - 1];
        }
    }

    return dest;
}

int main() {
    char str1[] = "Hello, World!";
    char str2[20];

    ft_memmove(str2, str1, sizeof(str1));

    printf("str2: %s\n", str2);

    return 0;
}
