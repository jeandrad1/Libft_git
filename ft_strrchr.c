
#include "libft.h"

char	*ft_strrchr ( const char *str, int c)
{
	int i;
	
	i = ft_strlen(str) - 1;
	while(i > -1)
	{
		if (str[i] == (char)c)
			return ((char*)&str[i]);
		i--;
	}
	return (NULL);
}

#include <stdio.h>
int main(void)
{
	const char *str = "Find h here.";
	int c = 'h';
	
	char *result = ft_strrchr(str, c);
	
	if (result != NULL)
		printf("Character '%c' found at position: %ld\n", c, result - str);
	else
		printf("Character '%c' not found\n", c);
	
	return 0;
}
