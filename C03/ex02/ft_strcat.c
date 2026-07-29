void *ft_strcat(char *dest, char *src)
{
  char *ptr = dest;

  while (*dest != '\0')
    dest++;
  
    while ((*dest++ = *src++))
      ;

    return (ptr);
}

#include <unistd.h>
#include <stdio.h>
 
int	main(void)
{
   char	dest[50] = "42 ";
  char	*src = "Sao Paulo";
  char *result;

  result = ft_strcat(dest, src);
  
  int i = 0;
  while(result[i] != '\0'){
      write (1, &result[i], 1);
      i++;
  }
  write(1, "\n", 1); 
  return (0);
}
