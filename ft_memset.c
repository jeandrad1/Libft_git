
#include "libft.h"

void ft_memset(char *str, int c, unsigned int n)
{
	int i;

	i = 0;
	while (str[i] != '\0' && i < n)
	{
		str[i] = c;
		i++;
	}
}
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