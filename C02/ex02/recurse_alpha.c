#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    if (*str == '\0')
        return(1);

    if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str >= 'Z')))
    
    return(0);
    
    
    return(ft_str_is_alpha(str + 1));
}

int main(void)
{
    int rev;
    char c;

    rev = ft_str_is_alpha("34785");
    c = rev + '0';
    write (1, &c, 1);
    
    write (1, ", ", 2);

    rev = ft_str_is_alpha("aaaaa");
    c = rev + '0';
    write (1, &c, 1);

    write (1, "\n", 1);
    return (0);
}
