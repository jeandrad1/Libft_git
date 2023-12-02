
#include "libft.h"

char * strrchr ( const char *str, int c)
{
	int i;
	
	i = ft_strlen(str) - 1;
	while(i > -1)
	{
		if(str[i] == c)
			return(i);
		i++;
	}
	return (0);
}
