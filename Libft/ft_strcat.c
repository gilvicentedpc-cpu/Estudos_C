#include "libft.h"

void *ft_strcat(char *dest, const char *src)
{
  char *ptr = dest;

  while (*dest != '\0')
      dest++;

  while ((*dest++ = *src++))
    ;

    return (ptr);
}
