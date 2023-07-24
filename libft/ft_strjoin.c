#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		j;
	char	*str;
	int		i;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	str = gc(sizeof (char) * ((ft_strlen(s1)) + ft_strlen(s2)) + 1, 1);
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	j = i;
	i = -1;
	while (s2[++i])
		str[j++] = s2[i];
	str[j] = '\0';
	return (str);
}
