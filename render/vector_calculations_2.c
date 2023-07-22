#include "vectors.h"
#include <math.h>

double	lengthvec(t_vec v)
{
	return (sqrt(dot_prod(v, v)));
}

t_vec	normvec(t_vec v)
{
	return (vecxnum(v, 1 / lengthvec(v)));
}
