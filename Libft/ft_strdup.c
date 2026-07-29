#include "libft.h"

char *strdup(const char *s)
{
  char *ptr = malloc(ft_strlen(s) + 1);
  char *dest = ptr;

  if (ptr == NULL)
          return NULL;
  
  while(*s != '\0')
  {
    *ptr++ = *s++;
  }
  *ptr = '\0';

  return (dest);
}
