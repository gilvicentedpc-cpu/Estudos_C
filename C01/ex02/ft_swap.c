#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;

    write(1, (char *)a, 1);
    write(1, (char *)b, 1);
}

int main(void)
{
    char p[] = "2";
    char x[] = "1";

    ft_swap((int *)p,(int *)x);
    write(1, "\n", 1);
    return 0;
}
