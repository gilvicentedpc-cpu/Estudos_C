#include <unistd.h>
void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else if (nb < 0)
    {
        write(1, "-", 1);
        ft_putnbr(-nb); // Transforma em positivo e manda de volta
    }
    else if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else // Aqui só chegam números de 0 a 9!
    {
        char c = nb + '0';
        write(1, &c, 1);
    }
}

int main(void)
{
  int  nb = 42;
  ft_putnbr(nb);
  write (1, "\n", 1);
  return(0);
}
