#ifndef LIGHT_H
# define LIGHT_H

#include "vectors.h"

typedef struct s_light
{
	int 			type;
	t_point			pos;
	double			range;
	t_color			color;
	struct s_light	*next;
}	t_light;

#endif // LIGHT_H