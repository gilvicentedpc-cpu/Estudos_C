#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*ptr;

	ch = (char)c;
	ptr = (char *)s;
	while (*s != '\0')
		s++;

	while (s != ptr)
	{
		if (*s == ch)
		{
			return ((char *)s);
		}
		s--;
	}
	if (*s == ch)
	{
		return ((char *)s);
	}
	return (0);
}
