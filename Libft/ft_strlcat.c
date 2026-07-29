#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
  size_t i;
  size_t j;

  i = ft_strlen(dst);

  if (dstsize <= i)
  {
    return(dstsize + ft_strlen(src));
  }
 
  j = 0;
  dstsize -= i;

  while (src[j] != '\0' && dstsize > 1)
  {
      dst[i + j] = src[j];
      j++;
      dstsize--;
  }
  dst[i + j] = '\0';

  return (i + ft_strlen(src));
}
