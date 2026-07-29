#include <unistd.h>
#include <stdio.h>

void ft_collatz(unsigned long long  n)
{
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        printf("%llu, ", n);
    }
    printf ("\n");
}
int main(void)
{
    unsigned long long n = 987654321012345678ULL;
    ft_collatz(n);
    return (0);
}
