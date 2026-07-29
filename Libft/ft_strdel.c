#include "libft.c"

void ft_strdel(char **as)
{
  if (as != NULL && *as != NULL)
  {
    free(*as);
    *as = NULL;
  }
}
