    #ifndef HEADER_H
    #define HEADER_H

    #include <unistd.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>

    typedef struct s_list {
        char   *id;
        char   *name;
    }t_list;

    t_list *dicionario(int size);
    int  ft_strlen(char *src);
    void ft_putstr(char *str);
    int ft_strcmp(char *s1, char *s2);

#endif
