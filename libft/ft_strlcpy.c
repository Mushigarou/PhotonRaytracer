#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	i = -1;
	srcsize = ft_strlen(src);
	if (!dstsize)
		return (srcsize);
	while (src[++i] && i < dstsize - 1)
		*(dst + i) = *(src + i);
	*(dst + i) = '\0';
	return (srcsize);
}
