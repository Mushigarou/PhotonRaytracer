#include "../includes/rt_parser.h"
#include "../includes/minirt.h"

t_scene *ft_newobj(void *obj,int type)
{
	t_scene *node;

	node = gc(sizeof(t_scene), 1);
	node->object = obj;
	node->type = type;
	node->next = NULL;
	return (node);
}

void addobj(t_scene **scene, t_scene *new)
{
	(*scene) && (new -> next = *scene);
	*scene = new;
}
