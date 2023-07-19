#ifndef CAMERA_H
# define CAMERA_H

#include "vectors.h"

typedef struct s_cam
{
	int		type;
	t_point	center;
	t_vec 	forvec;
	t_vec 	sidevec;
	t_vec 	upvec;
	int		FOV;
}	t_cam;

#endif // CAMERA_H