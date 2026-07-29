#include <unistd.h>

void ft_putstr(char *str)

{
    int n = 0;
    int p;
   
    while (str[n] >= '0' && str[n] <= '9')
    {
        p = n;
        while (str[p] && str[p] - 1 - n - 1 + '0')
        {
        p++;
        write (1, &p, 1);
        write (1, &n, 1);
        write(1, ", ", 2);
        }
    str++;    
    n++;
    }
}  

void ft_print_combn(int n)
{
    char c;
    
         c = n / 10 + '0';
         write (1,  &c, 1);
         c = n % 10 + '0';
         write (1, &c, 1);

         ft_putstr(&c);
}

int main(void)
{
    ft_print_combn(2);
    write (1, "\n", 1);
    return (0);
}
