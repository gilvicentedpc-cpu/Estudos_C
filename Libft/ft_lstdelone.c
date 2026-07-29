#include "libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
 if (alst != NULL || alst != NULL)
  {
    free(*alst)
    *alst = NULL; 
  }
}
