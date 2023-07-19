#ifndef CYLINDER_H
# define CYLINDER_H

#include "vectors.h"

typedef struct s_cylinder
{
	int					type;
	t_point				center;
	double				diam;
	double				height;
	t_vec				nvec;
	t_color				color;
	struct s_cylinder	*next;
}	t_cylinder;

#endif // CYLINDER_H