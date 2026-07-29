#include <unistd.h>
 
char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
       
    i = 0;
    while (src[i] != '\0' && i < n)
            {
            dest[i] = src[i];
            i++;
            }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main(void)
{
    char array[50];
    char *p = "Heello WOrd";
    unsigned int  x = 5; 

    ft_strncpy(array, p, x);
    write (1, array, 12);

    write (1, "\n", 1);
    return (0);
 }
