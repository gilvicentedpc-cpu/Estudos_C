#include "libft.h"

char *ft_strcpy(char *dest, const char *src)
{
  char *ptr;

  ptr = dest;
  while (*src != '\0')
  {
    *dest++ = *src++; 
  }
  *dest = '\0';
  return (ptr);
}
