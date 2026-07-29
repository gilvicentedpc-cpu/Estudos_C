#include<unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
    int	i;
    int	j;

    i = 0;
    // CASO ESPECIAL: Se a agulha estiver vazia, retorna a própria string
    if (to_find[0] == '\0')
        return (str);
    // Percorre a string principal (o palheiro)
    while (str[i] != '\0')
    {
        j = 0;
        // Se as letras batem, inicia a busca interna
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
        {
            j++;
            // Se chegamos no fim da agulha, significa que batemos tudo!
            if (to_find[j] == '\0')
                // Retorna o endereço de onde a agulha começou (str + i)
                return (&str[i]);
        }
        i++;
    }
    return (0); // Retorna NULL se não achar nada
}



int	main(void)
{
    char *frase = "A amizade e o sal da vida";
    char *busca = "sal";
    char *resultado;

    resultado = ft_strstr(frase, busca);
    if (resultado)
    {
        // Se achou, 'resultado' aponta para "sal da vida"
        write(1, "Achou: ", 7);
        while (*resultado)
        {
            write(1, resultado, 1);
            resultado++;
        }
    }
    else
        write(1, "Nao encontrado", 14);
    return (0);
}
