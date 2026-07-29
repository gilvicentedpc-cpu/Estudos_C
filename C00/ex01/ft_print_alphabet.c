#include <unistd.h>

void ft_print_alphabet(void)
{
    int n;
    int x;

    n = 'z';
    x = 'a';
    
    while (x <= n)
    {
    write(1, &x, 1);
    x++;
    }
}

int main(void)
{
    ft_print_alphabet();
    write(1,"\n", 1 );
    return 0;
}
