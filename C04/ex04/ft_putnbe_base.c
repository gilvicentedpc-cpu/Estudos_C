#include <unistd.h>

// Função para verificar se a base é válida
int	is_valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	// Base vazia ou com apenas 1 caractere é inválida
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		// Não pode ter + ou -
		if (base[i] == '+' || base[i] == '-')
			return (0);
		// Não pode ter caracteres duplicados
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i); // Retorna o tamanho da base (ex: 2 para binário, 10 para decimal)
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;

	base_len = is_valid_base(base);
	if (base_len < 2)
		return ;
	n = nbr; // Usamos long para evitar problemas com o valor mínimo de um int
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}	
	// Recursividade: divide o número até chegar no primeiro dígito
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	
	// Imprime o caractere correspondente ao resto na string da base
	write(1, &base[n % base_len], 1);
}

int main(void)
{
    // Teste Decimal
    ft_putnbr_base(123, "0123456789");
    write(1, "\n", 1);

    // Teste Binário
    ft_putnbr_base(123, "01");
    write(1, "\n", 1);

    // Teste Hexadecimal (Negativo)
    ft_putnbr_base(-255, "0123456789ABCDEF");
    write(1, "\n", 1);

    return (0);
}
