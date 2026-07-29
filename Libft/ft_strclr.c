#include "libft.c"

void ft_strclr(char *s)
{
    if (s != NULL)
    {
      while (*s != '\0')
      {
        *s = '\0';
        s++;
      }
    }
}
