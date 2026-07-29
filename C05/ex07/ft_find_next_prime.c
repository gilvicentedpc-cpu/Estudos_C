#include <stdio.h>

int ft_is_prime(int nb)
{
    if (nb <= 1)
        return (0);

     int i = 2;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb <= 2)
        return (2);

    while (1)
    {
        if (ft_is_prime(nb))
            return (nb);
        nb++;
    }
}

int main(void)
{
    printf("Próximo primo de 13: %d (Esperado: 13)\n", ft_find_next_prime(13));
    printf("Próximo primo de 14: %d (Esperado: 17)\n", ft_find_next_prime(14));
    printf("Próximo primo de -5: %d (Esperado: 2)\n", ft_find_next_prime(-5));
    return (0);
}
