#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    if (min >= max)
        return NULL;

    int i;
    int  *ptr = malloc(sizeof(int) * (max - min)+ 1);

    i = 0;
    while (min <= max)
    {
        ptr[i] = min;    
        min++;
        i++;
    }
    return (ptr);  
}

int main(void)
{
    int i = 65;
    int j = 90;
    int *result;
    int cont;

    result = ft_range(i, j);
    
    cont = 0;
    while(cont < 25)
    {
    write (1, &result[cont], 1);
    cont++;
    }
    write (1, "\n", 1);
    return (0);

}
