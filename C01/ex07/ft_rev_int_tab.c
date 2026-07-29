#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    while (i < size / 2)
    {
    temp = tab[i];
    tab[i] = tab[size - 1];
    tab[size - 1] = temp;
    i++;  
    }
}

int main(void)
{
    int numeros[] = {1, 2, 3, 4,5};
    int i = 0;
    char c;

        ft_rev_int_tab(numeros, 5);
    while (i < 5)
    {
        c = numeros[i] + '0';
            write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
