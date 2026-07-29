#include <stdio.h>

int ft_fibonacci(int index)
{
   int ptr[100]; 
   int i;

   if (index < 0) return 0;

   i = 2;
   ptr[0] = 0; 
   ptr[1] = 1;

    while (i <= index) 
   {
        ptr[i] = ptr[i - 1] + ptr[i - 2];
        i++;
   }
    return (ptr[i]); 
}

int main(void)
{
    int x = 5;
    int result;

    result = ft_fibonacci(x);
    printf("%d\n", result); 
    return 0;
}
