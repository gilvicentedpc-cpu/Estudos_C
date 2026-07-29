#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *nova_string;
    unsigned int    i;

    // 1. Mesma proteção contra nulos
    if (s == NULL || f == NULL)
        return (NULL);

    // 2. Mesma alocação (tamanho + 1 para o \0)
    nova_string = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (nova_string == NULL)
        return (NULL);

    // 3. Mesmo loop, mas passando o 'i' para a função 'f'
    i = 0;
    while (s[i] != '\0')
    {
        nova_string[i] = f(i, s[i]); // <--- A grande diferença aqui!
        i++;
    }

    // 4. Mesmo fechamento da string
    nova_string[i] = '\0';

    return (nova_string);
}
