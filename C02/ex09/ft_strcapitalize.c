#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int i;
    int novo;

    i = 0;
    novo = 1;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && novo == 1)
        str[i] -= 32;
                               
     else if ((str[i]  >= 'A' && str[i] <= 'Z') && novo == 0)       
       str[i] += 32;             
       
       if (!((str[i] >= 'a' && str[i] <= 'z') ||
               (str[i] >= 'A' && str[i] <= 'z') ||
               (str[i] >= '0' && str[i] <= '9')))
           novo = 1;
       else
           novo = 0;
       i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
    ft_strcapitalize(str);

    int i = 0;

    while (str[i])
    {
    write (1, &str[i], 1);
    i++;
    }
    write (1, "\n", 1);
    return (0);
}
