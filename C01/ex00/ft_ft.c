#include <unistd.h>

void ft_ft(int *nbr)
{
    write(1, nbr, 2);
}

int main(void)
{
    char *s = "ABCd";
    int *nbr = (int *)s;
    write (1, nbr, 4);
    write (1, " ", 1);
    char *gg = "42";   

    ft_ft((int *)gg);

    write(1, "\n", 1);
    return 0; 
}
