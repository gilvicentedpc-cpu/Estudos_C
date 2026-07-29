#include |"libft.h"

int ft_atoi(const char *str)
{
  int i;
  int result;

  i = 1;
  result = 0;
    
  while (*str == ' ' || (*str >= 9 && *str <= 13))
    str++;

  if  (*str == '-' || *str == '+')
  {
    if (*str == '-')
    {
      i *= -1;
    }
    str++;
  }
  while (*str >= '0' && *str <= '9')
  {
    result = (result * 10) + (*str - '0');
    str++;
  }
  return (result * i);
}
