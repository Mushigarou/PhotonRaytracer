#include "plane.h"
#include "render_utils.h"

bool	interpl(t_ray *ray, t_plane *pl, t_solution *T)
{
	double t;
	double div;

	div = dot_prod(normvec(ray->direction), pl->nvec);
	if (div == 0)
		return (false);
	t = dot_prod(vecsub(pl->point, ray->origin), pl->nvec) / div;
	if((t < T->t || T->t == -1) && t > EPS)
	{
		T->t = t;
		T->color = pl->color;
		T->inter = vecadd(ray->origin, vecxnum(normvec(ray->direction), t));
		if (div > EPS)
			T->norm = vecxnum(pl->nvec, -1);
		else
			T->norm = pl->nvec;
		return (true);
	}
	return (false);
}
