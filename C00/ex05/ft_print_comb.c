#include <unistd.h>

void ft_print_comb(void)
{
    int x;
    int i;
    int j;

    x = '0' - 1;
    while(++x <= '7')
    {
        i = x;
        while(++i <= '8')
        {
            j = i;
            while(++j <= '9')
            {
            write(1, &x, 1);
            write(1, &i, 1);
            write(1, &j, 1);
            
            if (!(x == '7' && i == '8' && j == '9'))
            
                write(1, ", ", 2);
            }
        }
    }

}

int main(void)
{
    ft_print_comb();
    write(1, "\n", 1);
    return 0;
}
