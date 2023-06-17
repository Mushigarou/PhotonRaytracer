#include "../includes/rt_render.h"
#include <mlx.h>

void	rt_rendering(t_data *data)
{
	(void)data;
	t_mlx mlx;

	mlx.mlx = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx, 900, 800, "minirt");
	// TODO : take the FOV and update the new width and the height * 4;
	// TODO : position of camera to send rays;


	mlx_loop(mlx.mlx);
}