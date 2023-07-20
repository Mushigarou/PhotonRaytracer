#ifndef PLANE_H
# define PLANE_H

#include "vectors.h"
#include "render_utils.h"
#include <stdbool.h>

#ifndef EPS
# define EPS 0.00001
#endif // EPS

typedef struct s_plane
{
	int					type;
	t_point				point;
	t_vec				nvec;
	t_color				color;
	struct s_plane		*next;
}	t_plane;

bool	interpl(t_ray *ray, t_plane *pl, t_solution *T);

#endif // PLANE_H