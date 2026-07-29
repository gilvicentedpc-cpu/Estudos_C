#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main(void)
{
    ft_putstr("Hello WOrld");
    write (1, "\n", 1);
    return 0;
}
