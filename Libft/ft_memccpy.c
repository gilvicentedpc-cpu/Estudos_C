#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		uc;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	uc = (unsigned char)c; // Transforma o int em unsigned char
	i = 0;
	while (i < n)
	{
		d[i] = s[i]; // Primeiro ela copia o byte!
		if (s[i] == uc) // Depois ela checa se era o caractere de parada
		{
			return (dest + i + 1); // Retorna a posição LOGO APÓS o caractere copiado
		}
		i++;
	}
	return (NULL); // Se rodou o 'n' inteiro e não achou 'c', retorna NULL
}
