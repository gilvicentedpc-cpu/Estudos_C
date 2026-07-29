#include <unistd.h>

void ft_putstr(char *str)
{
    if (*str != '\0')
    {   
        write(1, str, 1);

        ft_putstr(str + 1);
    }
}

int main(void)
{
    ft_putstr("Hello World 42!!");
    write(1, "\n", 1);
    return (0);
}
