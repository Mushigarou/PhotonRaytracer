#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	i = -1;
	if ((!dstsize && !dst) || !dstsize)
		return (slen);
	dlen = ft_strlen(dst);
	if (dlen > dstsize)
		return (slen + dstsize);
	while ((++i)[src] && i + dlen < dstsize - 1)
		(i + dlen)[dst] = i[src];
	(i + dlen)[dst] = '\0';
	return (dlen + slen);
}
