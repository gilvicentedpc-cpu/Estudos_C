#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int str_len;
    i = 0;

    str_len = 0;
    while(src[str_len])        
        str_len++;

    if (size == 0)
        return (str_len);

    while (src[i] != '\0' && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }    
    
    dest[i] = '\0';
    return (str_len);
}

int main(void)
{
    char dest[50] = "42 ";
    char *src = "sao paulo";
    unsigned int  tamanho;

    tamanho = ft_strlcpy(dest, src, 5);

    int i = 0;
    while (dest[i] != '\0')
    {
    write (1, &dest[i], 1) ;
    i++;  
    }
    write (1, "\n", 1);
    return (0);
}
    
