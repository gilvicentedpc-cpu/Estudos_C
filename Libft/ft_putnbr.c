#include "libft.h"

void  ft_putnbr(int n)
{
  if (n == -2147483648)
  {
      write(1, "-2147483648", 11);
      return;
  }
  else if (n < 0)
  {
    write (1, "-", 1);
    n = -n;
  }
  else if (n >= 0)
  {
    ft_putnbr(n / 10);
    ft_putnbr(n % 10);
  }
  else 
  {
  char c = n + '0';
  write (1, &c, 1);
  }
}
