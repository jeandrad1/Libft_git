#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
        ft_putchr_fd(s[i++], fd);
}
/*
int main(void)
{
    char test[] = "Hello World!";
    ft_putstr_fd(test, 1);
    return (0);
}
*/