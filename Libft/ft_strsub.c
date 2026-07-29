#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{ 
    unsigned int    i;
    char            *ptr;

    if (s == NULL)
        return (0);
    ptr = malloc(len + 1);
    if (ptr == NULL)
        return (0);
    if (start > ft_strlen(s))
    {
        *ptr = '\0';
        return (ptr);
    }
    i = 0;
    while (s[start] != '\0' && len > 0)
    {
        ptr[i] = s[start];
        i++;
        start++;
        len--;
    }
    ptr[i] = '\0';
    return (ptr);
 }
