#include "libft.h"
#include <stdlib.h>

int get_len(long n)
{
  int len;

  len = 0;
  if (n <= 0)
  {
    len = 1; 
    n = -n; 
  }
  while (n > 0)
  {
    n = n / 10; 
    len++;      
  }
  return (len);
}
char *ft_itoa(int n)
{
  int len;
  long nb;
  char *str;

  nb = n;
  len = get_len(nb); 

  str = malloc(sizeof(char) * (len + 1));
  if (!str)
    return (NULL);

  str[len] = '\0';
    len--;

  if (nb == 0)
  {
    str[0] = '0';
  }
  if (nb < 0)
  {
    str[0] = '-';
    nb = -nb; 
  }
  while (nb > 0)
  {
    str[len] = (nb % 10) + '0';
    nb = nb / 10;               
    len--;                      
  }
  return (str);
}
