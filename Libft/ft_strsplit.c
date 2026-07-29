
#include "libft.h"

size_t contador_palavras(char const *s, char c)
{
    size_t x = 0; 
    while (*s)
    {
        if (*s != c)
        {
            x++; 
            while (*s && *s != c) 
                s++;
        }
        else
            s++;
    }
    return (x);
}

size_t contador_letras(char const *s, char c)
{
    size_t i = 0;

    while (s[i] != '\0' && s[i] != c)
    {
        i++;
    }
    return (i); 
}

void limpa_tudo(char **tabuleiro)
{
    int i;

    i = 0;
       while (tabuleiro[i] != NULL)
    {
        free(tabuleiro[i]);
    i++;
    }
    // 2. Só DEPOIS que todas as colunas sumiram, você libera a estrutura principal
    free(tabuleiro); // Libera o array de ponteiros (as linhas)
}

char **ft_strsplit(char const *s, char c)
{
    char    **tabuleiro;
    int     i;
    int     j = 0;
    int     k;
    if (!s)
        return (NULL);

    // Ajustado para o nome certo da função (plural)
    tabuleiro = malloc(sizeof(char *) * (contador_palavras(s, c) + 1));
    if (!tabuleiro) // Corrigido de ptr para tabuleiro
        return (NULL);
  
    i = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
            i++;

        if (s[i] != '\0')
        {
                       tabuleiro[j] = malloc(sizeof(char) * (contador_letras(&s[i], c) + 1));
           if (!tabuleiro[j])
            {
              libera_matriz_erro(tabuleiro, j); // Limpa as 'j' gavetas que já tinham dado certo
                    return (NULL);                   // Aborta o split e avisa que deu ruim
            }            k = 0;
            while (s[i] != c && s[i] != '\0')
            {
                tabuleiro[j][k] = s[i];
                k++;
                i++;
            }
            tabuleiro[j][k] = '\0'; // Fecha a palavra atual
            j++; // Passa para a próxima gaveta!
        }
    }
    tabuleiro[j] = NULL; // O "muro" de 0/NULL que o subject pede no final da matriz
    return (tabuleiro);
}
