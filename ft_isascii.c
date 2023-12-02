
#include "libft.h"

int	ft_isascii(int c)
{
	if(c >= 0 && c<= 127)
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("ft_isascii: %i\n", ft_isascii(':'));
	printf("isascii: %i\n", isascii(':'));
	return (0);
}
