#include <unistd.h>


int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    // 1. Pular espaços em branco (isspace)
    // Os caracteres de espaço em branco são: ' ', \f, \n, \r, \t, \v
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    // 2. Processar sinais + e -
    // Se o número de '-' for ímpar, o resultado é negativo.
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
          {
            sign *= -1;
    }
        i++;
    }

    // 3. Processar dígitos decimais e converter
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }

    return (result * sign);
}

// Função auxiliar para exibir o número sem usar printf
void	ft_putnbr(int nb)
{
	long	n;
	char	c;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main (int argc, char **argv)
{
	int	res;

	// Verifica se existe o argumento argv[1]
	if (argc > 1)
	{
		res = ft_atoi(argv[1]);
		ft_putnbr(res);
		write(1, "\n", 1); // Pula uma linha no final
	}
	return (0);
}
