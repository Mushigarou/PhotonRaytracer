#include "../includes/rt_parser.h"
#include "../includes/minirt.h"

t_scene *rt_parsing(int fd)
{
	char *line;
	t_scene *myscene;

	line = get_next_line(fd);
	while(line)
	{
		
		line = get_next_line(fd);
	}
	return 0;
}