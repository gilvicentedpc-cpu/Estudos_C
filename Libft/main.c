#include <stdio.h>
#include <string.h>
#include "libft.h"

void print_mem(unsigned char *s, size_t n)
{
    size_t i = 0;
    while (i < n)
    {
        printf("%02X ", s[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    printf("=== TESTANDO MANIPULAÇÃO DE MEMÓRIA ===\n\n");

    // 1. Teste da ft_bzero
    printf("--- [1] ft_bzero ---\n");
    unsigned char str1[10] = "ABCDEFGHIJ";
    unsigned char str2[10] = "ABCDEFGHIJ";
    bzero(str1, 5);      // Sua função
    // Se a sua na libft se chamar ft_bzero, mude a linha acima para: ft_bzero(str1, 5);
    memset(str2, 0, 5);  // Original para comparar
    printf("Sua bzero: "); print_mem(str1, 10);
    printf("Original : "); print_mem(str2, 10);
    printf("\n");

    // 2. Teste da ft_memmove (com overlap / sobreposição)
    printf("--- [2] ft_memmove (Overlap) ---\n");
    char move1[20] = "Anakin Skywalker";
    char move2[20] = "Anakin Skywalker";
    // Copiando "Anakin" 3 casas para a frente -> Overlap!
    ft_memmove(move1 + 3, move1, 6);
    memmove(move2 + 3, move2, 6);
    printf("Sua memmove: %s\n", move1);
    printf("Original   : %s\n", move2);
    printf("\n");

    // 3. Teste da ft_memchr
    printf("--- [3] ft_memchr ---\n");
    char chr_str[] = "Procurando o Yoda na galaxia";
    char *sua_chr = ft_memchr(chr_str, 'Y', 20);
    char *orig_chr = memchr(chr_str, 'Y', 20);
    printf("Sua memchr encontrou: %s\n", sua_chr);
    printf("Original encontrou  : %s\n", orig_chr);
    printf("\n");

    // 4. Teste da ft_memcmp
    printf("--- [4] ft_memcmp ---\n");
    char cmp1[] = "Vader";
    char cmp2[] = "Vader";
    char cmp3[] = "Vagas";
    printf("Iguais (Sua vs Orig) : %d | %d\n", ft_memcmp(cmp1, cmp2, 5), memcmp(cmp1, cmp2, 5));
    printf("Difer (Sua vs Orig)  : %d | %d\n", ft_memcmp(cmp1, cmp3, 5), memcmp(cmp1, cmp3, 5));
    
    return (0);
}
