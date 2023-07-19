#ifndef RENDER_H
# define RENDER_H

// #include "intersection_utils.h"
#include "vectors.h"
#include "render_utils.h"
#include "screen.h"
#include "light.h"

typedef	struct s_intersection_utils
{
	t_solution	T;
	t_ray		ray;
	t_mlx		mlx;
	t_light		*am;
	t_light		*l;
}	t_utils;


#endif // RENDER_H