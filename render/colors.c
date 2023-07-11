#include "../includes/rt_render.h"

t_color coefcolor(t_color color, double coef)
{
	t_color c;

	c = vecxnum(color, coef);
	(c.x > 255) && (c.x = 255);
	(c.y > 255) && (c.y = 255);
	(c.z > 255) && (c.z = 255);
	return(c);
}

t_color coloradd(t_color c1, t_color c2)
{
	t_color c;

	c = vecadd(c1, c2);
	(c.x > 255) && (c.x = 255);
	(c.y > 255) && (c.y = 255);
	(c.z > 255) && (c.z = 255);
	return(c);
}
