#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    if (nb <= 0)
        return (0);
    
    i = 2;
    while (i <= nb / i)
    {
        if (nb % i == 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    int x;
    int i;
    int result;
    int res;

    i = 7;
    x = 8;

    result = ft_is_prime(x);
    printf ("%d\n", result);

    res = ft_is_prime(i);
    printf ("%d\n", res);

    return (0);
}
