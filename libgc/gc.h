#ifndef GC_H
# define GC_H

# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_gc
{
	void		*ptr;
	struct s_gc	*next;
}				t_gc;

void			*gc(size_t size, int param);
void			ft_gcclear(t_gc **g);
t_gc			*ft_gcnew(void *ptr);
void			gcadd_front(t_gc **gc, t_gc *g);
#endif