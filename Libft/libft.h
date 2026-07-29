#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	*ft_memcpy(void *s1, const void *s2, size_t n);
void *memset(void *s, int c, size_t n);

