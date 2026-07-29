#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
    int i;

    if (s1 == NULL || s2 == NULL)
        return (0);
	
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main(void)
{
    char *str1 = "42SP";
    char *str2 = "42School";
    int diff;

    diff = ft_strcmp(str1, str2);

    if (diff == 0)
        write(1, "Iguais\n", 7);
    else if (diff < 0)
        write(1, "s1 eh menor\n", 12);
    else
        write(1, "s1 eh maior\n", 12);
    
    return (0);
}   
