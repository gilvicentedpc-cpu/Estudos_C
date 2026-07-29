char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int	i;

    i = 0;
    // 1. Copia o src para o dest enquanto src não acabar E não batermos o limite n
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    // 2. O manual diz: se n for maior que a string, preencha o resto com \0
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    // 3. Retorna o dest original (que não saiu do lugar!)
    return (dest);
}

