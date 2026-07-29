#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
    if (s1 == NULL || s2 == NULL)
        return (0);

    while (n > 0 && *s1 && *s1 == *s2)
    {
        s1++;
        s2++;
        n--;
    }
    if (n == 0)
    { 
        return (0);
    }
    return ((unsigned char)*s1 -(unsigned char) *s2);
}

int	main(void)
{
    int res;

    res = ft_strncmp("abcde", "abczz", 3);
    if (res == 0)
        write(1, "Iguais\n", 7);
    else
        write(1, "Diferentes\n", 11);

    res = ft_strncmp("abcde", "abczz", 4);
    if (res == 0)
        write(1, "Iguais\n", 7);
    else
        write(1, "Diferentes\n", 11);

    return (0);
}
