#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strdup(char *src)
{
    char *ptr = malloc(strlen(src) + 1);
    char *comeco = ptr;

    while (*src != '\0')
    {
       *ptr++ = *src++;
    }
    *ptr = '\0';
    return (comeco);
}
