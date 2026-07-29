#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a;
    *a = temp / *b;
    *b = temp % *b;

    //write(1, a, 1);
    //write(1, b, 1);
}
    
int main(void)
{    
    int x = 5;
    int y = 5;

    ft_ultimate_div_mod(&x, &y);
    
    char c = x + '0';
    write (1, &c, 1);

    write(1, "\n", 1);
    return 0;
}
