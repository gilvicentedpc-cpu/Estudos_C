#include <unistd.h>

int main(int argc, char **argv)
{
    int  i;
    int  j;
    char temp;
    int  troca; // A nossa bandeira (ou alarme)

    if (argc > 1 && argv != 0)
    {
        i = 1;
        while (i < argc)
        {
            troca = 1;
            while (troca == 1)
            {
                troca = 0;

                j = 0;
                while (argv[i][j] != '\0')
                {
                    j++;
                }
                j -= 1;
                while (j > 0)
                {
                    if (argv[i][j] < argv[i][j - 1])
                    {
                        temp = argv[i][j - 1];
                        argv[i][j - 1] = argv[i][j];
                        argv[i][j] = temp;

                        troca = 1;
                    }
                    j--;
                }
            } 
            j = 0;
            while (argv[i][j] != '\0')
            {
                write(1, &argv[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}
