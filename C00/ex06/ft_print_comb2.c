#include <unistd.h>

void write_number(int n)
{
    char    c;

    c = n / 10 + '0';
    write(1, &c, 1);
    c = n % 10 + '0';
    write (1, &c, 1);
}

void ft_print_comb2(void)
{
    int n;
    int i; 

    n = 0;
    while(n <= 98)
    {
        i = n + 1;
        while(i <= 99)
        {
        write_number(n);
        write(1, " ", 1);
        write_number(i);
        if (n != 98 || i != 99 )
            write(1, ", ", 2); 
         i++;     
        }       
    n++; 
    }
} 

int main(void)
{
    ft_print_comb2();
    write(1, "\n", 1);
    return 0;
}
