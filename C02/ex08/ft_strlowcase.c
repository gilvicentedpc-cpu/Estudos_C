#include <unistd.h>

char *ft_strlowcase(char *str)
{
    if (*str == '\0')
        return (0);

    if (*str >= 'A' && *str <= 'Z')
    {
        *str = *str + 32;
    }
        return (ft_strlowcase(str + 1));
}

int main(void)
{
    char str[] = "GILVICENTE";

    ft_strlowcase(str);

    int i = 0;

    while(str[i])
    {
    write(1, &str[i], 1);
    i++;
    }
    write (1, "\n", 1);
    return (0);
}
