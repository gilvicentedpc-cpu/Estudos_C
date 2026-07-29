#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char *start;
	

	if (!s1 || !s2)
		return (NULL);
	
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));	
  if (!ptr)
		return (NULL);
	
	start = ptr;
  while (*s1 != '\0')
	{
		*ptr++ = *s1++;
	}
	
	while (*s2 != '\0')
	{
		ptr++ = *s2++;
	}
	
	*ptr = '\0';
	
	return (start);
}

