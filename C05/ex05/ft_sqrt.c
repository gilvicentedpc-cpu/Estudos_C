#include <stdio.h>

int ft_sqrt(int nb)
{
    int x;

    if (nb <= 0)
        return(0);

    x = 1;
    while (x <= nb / x)
    {
        if (x * x == nb)
        {
            return (x);
        }
        x++;
    }
    return (0);
}

int main(void)
{
    int x;
    int result;

    x = 49;
    result = ft_sqrt(x);
    printf ("%d\n",result);
    return (0);
}
