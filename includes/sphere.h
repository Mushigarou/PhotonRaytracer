#ifndef SPHERE_H
# define SPHERE_H

# include "vectors.h"

typedef struct s_sphere
{
	int				type;
	t_point			center;
	double			diam;
	t_color				color;
	struct s_sphere	*next;
}	t_sphere;

#endif // SPHERE_H