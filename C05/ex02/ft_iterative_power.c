#include <stdio.h> 

int ft_iterative_power(int nb, int power)
{
    int i;

    if (nb == 0)
        return(0);

    i = 1;
    while (power >= 1)
    {
        i = i * nb;
        power--;
    }
    return (i);
}

int main(void)
{
    int i = 6;
    int j = 3;
    int result;

    result = ft_iterative_power(i, j);
    printf ("%d\n", result);
    return (0);
}
