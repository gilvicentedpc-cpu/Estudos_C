#include "libft.h"

char *strchr(const char *s, int c)
{
    char ch;
    
    ch = (const char)c;

  while (*s != '\0')
  {
      if (*s == ch)
      {
          return ((char *)s);
      }
    s++;
  }
  if (*s == ch)
  {
    return  return ((char *)s);
  }
  return (0);
}
