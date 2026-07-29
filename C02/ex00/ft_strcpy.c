#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    char    *ptr = dest;

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;    
    }
    dest = '\0';
    return (ptr);
}

int main(void)
{
    char array[50];
    char *p = "hello";

    ft_strcpy(array, p);
    write (1, array, 5);

    write (1, "\n", 1);
    return (0);
}
