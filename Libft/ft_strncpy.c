#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
  size_t i;
  char *ptr;

  ptr = dest;
  i = 0;
  while (src[i] != '\0' && i < n)
  {
    dest[i] = src[i];
    i++;
  }
  while (i < n)
  {
    dest[i] = '\0';
    i++;
  }
  return (ptr);
}

