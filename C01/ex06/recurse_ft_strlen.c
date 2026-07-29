#include <unistd.h>

int ft_strlen(char *str)
{
    if (*str == '\0')
        return (0);

    return (1 + ft_strlen(str + 1));
}

int main(void)
{
    char *p = "Hello42!";
    int tamanho;

  tamanho = ft_strlen(p);

   char c = tamanho + '0';
   write (1, &c, 1);
   write (1, "\n", 1);
    return (0);
}
