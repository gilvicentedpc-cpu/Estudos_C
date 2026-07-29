#include<unistd.h>

int ft_str_is_lowercase(char *str)
{
    if (*str == '\0')
        return (1);
    
    if (!(*str >= 'a' && *str <= 'z')) 
    return (0);

    return (ft_str_is_lowercase(str + 1));   
}

int main(void)
{
    int rev;
    char c;

    rev = ft_str_is_lowercase("Gilz1nho");
    c = rev + '0';
    write (1, &c, 1);

    write (1, ", ", 2);

     rev = ft_str_is_lowercase("gil");
    c = rev + '0';
    write (1, &c, 1);

    write (1, "\n", 1);
    return (0);
}
