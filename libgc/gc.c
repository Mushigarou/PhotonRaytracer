#include "gc.h"

void	*gc(size_t size, int param)
{
	static t_gc	*head;
	void		*address;

	if (param == 1)
	{
		address = malloc(size);
		if (!address)
			return (ft_gcclear(&head), exit(1), NULL);
		gcadd_front(&head, ft_gcnew(address));
		return (address);
	}
	(!param) && (ft_gcclear(&head), exit(1), 0);
	return (NULL);
}
