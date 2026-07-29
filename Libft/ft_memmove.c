#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
  unsigned char *ptr;
  const unsigned char *p;
  
  if (!dest && !src)
    return NULL;

  ptr = (unsigned char *)dest;
  p = (const unsigned char *)src;

    if (dest > src)
    {
      while (n--)
      { 
        ptr[n] = p[n];
      }
    }
    else 
    {
      while(n > 0)
      {
      *ptr++ = *p++;
      n--;
      }
    }
    return (dest);
}
