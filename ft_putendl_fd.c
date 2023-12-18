#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    ft_putchr_fd('\n', fd);
}

/*
int main()
{
    char test[] = "Hello World!";
    ft_putendl_fd(test, 1);
    return (0);
}
*/