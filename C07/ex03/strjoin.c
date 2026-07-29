#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int tamanho(char **str, char *sep, int size)
{
    int i;
    int j;
    int tamanho;

    i = 0;
    tamanho = 0;
    while(i < size)
    {
        j = 0;
        while (str[i][j] != '\0')
        {
            j++;  
        }
    tamanho += j;
    i++;
    }
    return (tamanho + (strlen(sep) * (size - 1)));
}
            
char *ft_strjoin(int size, char **strs, char *sep)
{
    char *ptr;
    int tam;
    int i;
    int j;
    int k;

    tam = tamanho(strs, sep, size);
    ptr = malloc(sizeof(char) * tam + 1);

    i = 0;
    while (i < size)
    {
        while (strs[i][j] != '\0')
        {
          ptr[k] = strs[i][j];
          j++;
          k++;
        }
        if (i < size -1)
        {
            j = 0;
            while (sep[j] != '\0')
            {
                ptr[k++] = sep[j++];
            }
        }
    i++;
    }
    ptr[k] = '\0';
    return (ptr);
}
