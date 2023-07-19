#include "plane.h"
#include "render_utils.h"


void	interpl(t_ray *ray, t_plane *pl, t_solution *T)
{
	double t;

	t = dot_prod(vecsub(pl->point, ray->origin), pl->nvec) / dot_prod(ray->direction, pl->nvec);
	
	if((t < T->t || T->t == -1) && t > EPS)
	{
		T->t = t;
		T->color = pl->color;
		T->inter = vecadd(ray->origin, vecxnum(ray->direction, t));
		T->norm = pl->nvec;
	}
}