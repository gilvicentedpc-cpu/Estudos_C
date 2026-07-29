
#include "header.h"

    int ft_strlen(char *src)
    {
        int i;
    
        i = 0;
        while (src[i] != '\0')
        {
            i++;
        }
        return(i);
    }

char pesquisa(char *list, int item)
{
    int baixo;
    int meio;
    int alto = ft_strlen(list) - 1;
    char *chute;

    baixo = 0;
    while (baixo <= alto)
    {
        meio = (baixo + alto) / 2;
        *chute = list[meio];
        if (*chute == item)
        {
            return meio;
        }
        if (*chute > item)
        {    
             alto = meio - 1;
        }
        else
        {
             baixo = meio + 1;
         }
        }   
        return (0);
    }

    int ft_strcmp(char *s1, char *s2)
    {
        while (*s1 && *s2 && *s1 == *s2)
        {
            s1++;
            s2++;
        }
        return (*s1 - *s2);
    }
    
    void ft_putstr(char *str)
    {
        while (*str != '\0')
        {
            write (1, str, 1);
            str++;
        }
    }
