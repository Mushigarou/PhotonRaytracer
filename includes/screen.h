#ifndef SCREEN_H
# define SCREEN_H

typedef struct s_mlx_image
{
	char	*addr;
	void	*img;
	int		bits_per_pixel;
	int		endian;
	int		line_length;
}	t_img;


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