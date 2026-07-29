#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t nb)
{
  char *ptr = dest;

  while (*dest != '\0')
    dest++;

  while (*src != '\0' && nb > 0)
  {
    *dest++ = *src++;
    nb--;
  }
  *dest = '\0';
  return (ptr);
}
