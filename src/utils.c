#include "minirt.h"

int checkfile(char *file)
{
	int len;

	len = ft_strlen(file) - 3;
	if (ft_strncmp(file + len, ".rt", 3))
		return (-1);
	return (open(file, O_RDONLY));
}

// Initilizes mlx params;
void	initdata(t_data *data)
{
	data->amlight = NULL;
	data->cam = NULL;
	data->cyl = NULL;
	data->pl = NULL;
	data->sph = NULL;
	data->lights = NULL;
}
