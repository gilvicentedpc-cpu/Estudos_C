#include <unistd.h>

int ft_strlen(char *str)
{
    char   *ptr;

    ptr = str;
    while (*ptr != '\0')
    {        
        ptr++;
    }
    return (ptr - str);
}

int main(void)
{
    char *p = "42sp";
    int tamanho;

    tamanho = ft_strlen(p);

    char c = tamanho + '0';
    write(1, &c, 1);
    write(1, "\n", 1);
    return (0);
}
