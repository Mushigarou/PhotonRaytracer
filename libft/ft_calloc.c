#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*x;

	x = gc(count * size, 0);
	if (!x)
		return (x);
	ft_bzero(x, (count * size));
	return (x);
}
