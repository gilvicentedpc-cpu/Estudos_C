#include "libft.h"

int toupper(int ch)
{
  if (ch >= 'A' && ch <= 'Z')
  {
    ch = ch + 32;
  }
  return (ch);
}
