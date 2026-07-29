#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr;
	const unsigned char	*src;

	ptr = (const unsigned char *)s1;
	src = (const unsigned char *)s2;
	while (n--)
	{
		if (*ptr != *src)
		{
			return (*ptr - *src);
		}
		ptr++;
		src++;
	}
	return (0);
}
