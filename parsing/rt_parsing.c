#include "../includes/rt_parser.h"
#include "../includes/minirt.h"

t_scene *rt_parsing(int fd)
{
	char *line;
	t_scene *myscene;

	myscene = NULL;
	line = get_next_line(fd);
	while(line)
	{
		// addobj(&myscene, ft_newobj()
		line = get_next_line(fd);
	}
	return 0;
}