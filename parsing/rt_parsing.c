#include "../includes/minirt.h"

// *	Return type of the object
int	object_type(char *first_keyword)
{
	// TODO : Freeing double pointer `s` before each return()
	char **const s = ft_split(first_keyword, ' ');
	if (!first_keyword)
		return (ERROR);
	if(ft_strncmp(s[0], "sp", 2))
		return(SPHERE);
	if(ft_strncmp(s[0], "cy", 2))
		return(CYLINDER);
	return(ERROR);
}

// *	Check for errors in the given file.rt parameter
void	parse_file(t_data *data)
{
	(void)data;
	return ;
}
