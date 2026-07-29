#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    int n;
    int x;

    n = 'a';
    x = 'z';

    while (x >= n)
    {
        write(1, &x, 1);
        x--;
    }
}

int main(void){
    ft_print_reverse_alphabet();
    write (1, "\n", 1);
    return 0;
}
