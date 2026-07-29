#include <unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *ptr = dest;

	while (*dest != '\0')
	  dest++;
		
	while (*src != '\0' && nb > 0)
{
    *dest = *src;
    dest++;
    src++;
    nb--;
  }	
  *dest = '\0';
  return (ptr);
}

int main(void)
{
    char destino[50] = "42 ";
    char *origem = "Sao Paulo";
    char *result;
    unsigned int i = 3;

    result = ft_strncat(destino, origem, 3);
    
    int x = 0;
    while (result[x] != '\0')
    {
    write(1, &result[x], 1);
    x++;
    }
    return (0);
}
