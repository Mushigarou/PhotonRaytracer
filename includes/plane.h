#ifndef PLANE_H
# define PLANE_H

#include "vectors.h"

typedef struct s_plane
{
	int					type;
	t_point				point;
	t_vec				nvec;
	t_color				color;
	struct s_plane		*next;
}	t_plane;

#endif // PLANE_H