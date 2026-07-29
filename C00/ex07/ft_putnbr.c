#include  <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long n;

    n = nb;
    while (n < 0)
    {
    ft_putchar('-');
    n = -n;
    }

    if(n >= 10)
    {
    ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
    n++;
}

int main(void)
{
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    return 0;
}
