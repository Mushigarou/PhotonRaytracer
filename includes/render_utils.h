#ifndef RENDER_UTILS_H
# define RENDER_UTILS_H

#include "vectors.h"

typedef struct s_solution
{
	double	t;
	t_point center;
	t_point inter;
	t_vec lvec;
	t_vec norm;
	t_vec Rnorm;
	t_color color;
} t_solution;

#endif // RENDER_UTILS_H