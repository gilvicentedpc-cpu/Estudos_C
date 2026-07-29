#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if  (nb <= 1)
        return (nb);

    return (nb * ft_recursive_factorial(nb - 1));
}

int main (void)
{
    int nb = 6;
    int result;

    result = ft_recursive_factorial(nb);
    printf ("%d\n", result);
    return (0);
}
