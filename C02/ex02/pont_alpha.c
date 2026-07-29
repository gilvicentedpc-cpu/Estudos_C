#include <unistd.h>

int
ft_str_is_alpha(char *str)
{
    while(*str)
    {
    if  (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
    char c;

    rev = ft_str_is_alpha("222");
    c = rev + '0';
    write(1, &c, 1);

    write(1, ", ", 2);
    rev = ft_str_is_alpha("Gil");
    c = rev + '0';
    write (1, &c, 1);

    write(1, "\n", 1);
    return (0);
}
