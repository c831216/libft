#include "libft.h"

void	ft_strdel(char **as)
/*{
	if(as != NULL && *as != NULL)
		free(*as);
	as = NULL;
}
*/
{
	if (as != NULL && *as != NULL)
		ft_memdel((void**)as);
}
