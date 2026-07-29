#include <stdio.h>
#include <unistd.h>

void ft_putchar(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write (1, "\n", 1);
}

int main(void)
{
    char *ptr = "Gil Vicente";

    ft_putchar(ptr);
    return (0);
}
