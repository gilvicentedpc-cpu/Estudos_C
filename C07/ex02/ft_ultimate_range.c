#include <unistd.h> 
#include <stdlib.h> 

int ft_ultimate_range(int **range, int min, int max)
{       
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
        
    int i;
    *range = malloc(sizeof(int) * (max - min));

    if (!*range)
        return -1;

    i = 0;
    while (min < max)
    {
        (*range)[i] = min;
        min++;
        i++;
    }
    return (max - min);
}

int main(void)
{
    int cont;
    int result;
    int *C;

    result = ft_ultimate_range(&C, 65, 90);
    
    cont = 0;
    while (cont < result)
    {   
     write (1, &C[cont], 1);
    cont++;
    }
    write (1, "\n", 1);
    return 0;
}
