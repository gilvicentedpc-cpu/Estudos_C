#include <unistd.h> 
#include <stdio.h>

unsigned long long ft_iterative_factorial(unsigned long long  nb)
{
    unsigned long long     x;

    if (nb == 0)
        return(0);

    x = nb - 1;
    while (x > 0)
    { 
        nb = nb * x;
        x--;
    }
    return (nb);
}

int main(void)
{
    size_t nb;
    unsigned long long  result;

    nb = 25;
    result = ft_iterative_factorial(nb);
    printf ("%llu\n", result);

    return(0);
}
