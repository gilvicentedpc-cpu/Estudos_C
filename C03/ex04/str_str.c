#include<unistd.h>

char	*ft_strstr(char *str, char *to_find)
{ 
  char *ptr;
  char *tf;
    if (to_find == NULL)
        return (str);

    while (*str != '\0')
    {
    ptr = str;
    tf = to_find;
        while (*ptr == *tf && *ptr != '\0')
        {     
        tf++;
        ptr++;
        }
             if (*tf == '\0')
            {
                return(tf);
            }
    
    str++;
    }
  return(str);
}

int main (void){
char *lebre = "Eu Amo C!";
char *caçador = "Amo";
char *result;

result = ft_strstr(lebre, caçador);
write (1, result, 3);
write (1, "\n", 1);
return (0);
  
}
