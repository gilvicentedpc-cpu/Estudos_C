#include "libft.h"

void  ft_putnbr_fd(int n, int fd)
{
  if (n == -2147483648)
  {
      write(fd, "-2147483648", 11);
      return;
  }
  else if (n < 0)
  {
    write (1, "-", 1);
    n = -n;
  }
  else if (n >= 10)
  {
    ft_putnbr_fd(n / 10, fd);
    ft_putnbr_fd(n % 10, fd);
  }
  else 
  {
  char c = n + '0';
  write (fd, &c, 1);
  }
}
