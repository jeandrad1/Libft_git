
#include "libft.h"
#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore ft_memset(): %s\n", str); 
    ft_memset(str, 32, 8); 
    printf("After ft_memset():  %s\n", str); 
	return (0);
}
*/