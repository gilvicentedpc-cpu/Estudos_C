#include <unistd.h>

int     ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
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

    rev = ft_str_is_alpha("212");
    c = rev + '0';
    write (1, &c, 1);

    write (1, " ", 1);

    rev = ft_str_is_alpha("gil"); 
    c = rev + '0';
    write (1, &c, 1);

    write (1, "\n", 1);
    return (0);
}
