
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long int nb =n;
    if (nb < 0)
    {
        ft_putchr_fd('-', fd);
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
    else
        ft_putchr_fd(nb + '0', fd);
}
/*
int main()
{
    int i = -123456789;
    while (i < 123456789)
    {
        ft_putnbr_fd(i, 1);
        ft_putchr_fd('\n', 1);
        i++;
    }
    return (0);
}
*/