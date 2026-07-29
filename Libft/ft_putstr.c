#include "libft.c"

void ft_putsrt(char const *s)
{
  while (*s != '\0')
  {
    write (1, s, 1);
    s++;
  }
}
