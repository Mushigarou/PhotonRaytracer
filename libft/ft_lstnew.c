#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = gc(sizeof (t_list), 0);
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
