#include <unistd.h>

int     ft_str_is_printable(char *str)
{
    if  (*str == '\0')
        return  (1);

    if  (!(*str >= 32 && *str <= 126))
        return  (0);

    return  (ft_str_is_printable(str + 1));
}

int main(void)
{
    int     rev;
    char    c;

    rev = ft_str_is_printable("");
    c = rev + '0';
    write (1, &c, 1);

    write  (1, ", ", 2);

    rev = ft_str_is_printable("");
    c = rev + '0';
    write (1, &c, 1);

    write  (1, ", ", 2);

    rev = ft_str_is_printable("gilvicente");
    c = rev + '0';
    write (1, &c, 1);

    write   (1, "\n", 1);
    return  (0);
}
