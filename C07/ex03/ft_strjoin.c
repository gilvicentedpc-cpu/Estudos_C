#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int j;
    int tamanho;
    int k;
    int tam_sep;
    char *ptr;
   
     if (size == 0)
        return 0;
    
    i = 0;
    tamanho = 0;
    
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            j++; 
        }
    tamanho += j;
    i++;
    } 
    
    tam_sep = 0;
    while (sep[tam_sep] != '\0')
    {
        tam_sep++;
    }
    
    tamanho = tamanho + (tam_sep * (size - 1) + 1);

    ptr = malloc(sizeof(char) * tamanho);

    k = 0;
    i = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
             ptr[k] = strs[i][j];
             k++;
             j++;      
        }
            if (i < size - 1) 
            {
                j = 0;
                while (sep[j] != '\0')
                {
                        ptr[k] = sep[j];
                        k++;
                        j++;
                }
            }
    i++;        
    }
    ptr[k] = '\0';   
    return (ptr);
}
