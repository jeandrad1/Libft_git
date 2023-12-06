
#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;

	s = str;

	while (n > 0)
	{
		*s = (unsigned char)c;
		s++;
		n--;
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
    ft_memset(str, 0, 8); 
    printf("After ft_memset():  %s\n", str); 
	return (0);
}
*/