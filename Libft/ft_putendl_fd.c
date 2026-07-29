#include "libft.c"

void  ft_putendl_fd(char const *s, int fd)
{
  while (*s != '\0')
  {
    write (fd, s, 1);
    s++;
  }
  write (1, "\n", 1);
}
