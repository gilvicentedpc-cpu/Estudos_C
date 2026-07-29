#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char   *ptr;
	const unsigned char   *src;

	if (s1 == s2)
	    return (s1);
	ptr = (unsigned char *)s1;
	src = (const unsigned char *)s2;
	while (n--)
	{
		*ptr++ = *src++;
	}
	return (s1);
}


