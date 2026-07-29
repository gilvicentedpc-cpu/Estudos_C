#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	const char	*ptr;
	const char	*tf;

	if (*to_find == '\0')
		return ((char *)str);
	
	while (*str != '\0')
	{
		ptr = str;
		tf = to_find;
		while (*ptr == *tf && *ptr != '\0' && *tf != '\0')
		{
			ptr++;
			tf++;
		}
			if (*tf == '\0')
		{
			return ((char *)str);
		}
		str++;
	}
	return (0);
}
