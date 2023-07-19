#ifndef RENDER_UTILS_H
# define RENDER_UTILS_H

#include "vectors.h"
#include "image.h"

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

void	put_pixel_on_image(t_img *img, int x, int y, int color);

#endif // RENDER_UTILS_H