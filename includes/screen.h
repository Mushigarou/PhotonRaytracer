#ifndef SCREEN_H
# define SCREEN_H

# include "image.h"

typedef struct s_mlx
{
	void		*mlx;
	void		*win;
	t_img		*img;
	double		n_width;
	double		n_height;
	double		pixel;
}	t_mlx;

#endif // SCREEN_H