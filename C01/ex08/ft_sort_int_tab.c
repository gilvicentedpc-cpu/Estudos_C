#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;

    if (size <= 1)
        return;

    j = 0;
    while(!j)
    {
        j = 1;
        i = 0;
        while (i < size -1)
        {   
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                j = 0;
            }
            i++;
        }
        size--;
    }
    
}

int main(void)
{
      int array[] = {7, 3, 9, 1, 5, 0};
  int i = 0;
  char c;

      ft_sort_int_tab(array, 6);

     while (i < 6)
  {
     c = array[i] + '0';
      write(1, &c, 1);

      if (i < 5)
          write(1, ", ", 2);
      i++;
  }
  write(1, "\n", 1);
  return (0);
  }
