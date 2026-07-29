#include "libft.h"

char *ft_strtrim(char const *s)
{
    char        *ptr;
    char        *start;
    char        *end;
    char        *save;

    if (!s)
        return (NULL);

    start = (char *)s;
    while (*start == ' ' || *start == '\n' || *start == '\t')
        start++;

    end = (char *)s + ft_strlen(s) - 1;
    while (end >= start && (*end == ' ' || *end == '\n' || *end == '\t'))
        end--;

    ptr = malloc(sizeof(char) * (end - start + 2));
    if (!ptr)
        return (NULL);

    save = ptr;

    while (start <= end)
    {
        *ptr++ = *start++;
    }
    *ptr = '\0';

    return (save);
}
