#include <unistd.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= '1' && str[i] <= '9'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    int rev;
    char c;

    rev = ft_str_is_numeric("Gil");
    c = rev + '0';
    write (1, &c, 1);

    write (1, " ", 1);

     rev = ft_str_is_numeric("2323");
    c = rev + '0';
    write (1, &c, 1);

    write (1, "\n", 1);
    return (0);

}
