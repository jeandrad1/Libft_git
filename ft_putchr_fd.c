#include "libft.h"
#include <unistd.h>

void ft_putchr_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*
int main(void)
{
    ft_putchr_fd('t', 1);
    return (0);
}
*/