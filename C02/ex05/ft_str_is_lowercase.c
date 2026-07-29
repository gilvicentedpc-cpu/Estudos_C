#include <unistd.h>

int     ft_str_is_uppercase(char *str)
{
    while (*str != '\0')
    {
        if (!(*str >= 'A' && *str <= 'Z'))
        {
            return (0);
        }
        str++;
    }
    return (1);
}

int main(void)
{
    int rev;
    char    c;

    rev = ft_str_is_uppercase("gilvicente");
    c = rev + '0';
    write (1, &c, 1);

    write (1, ", ", 2);

     rev = ft_str_is_uppercase("GILVICENTE");
    c = rev + '0';
    write (1, &c, 1);

    write (1, ", ", 2);

     rev = ft_str_is_uppercase("");
    c = rev + '0';
    write (1, &c, 1);

    write (1, "\n", 1);
    return  (0);
}
