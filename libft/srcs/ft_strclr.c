#include "libft.h"

void ft_strclr(char *s)
{
	int size = ft_strlen(s);
	ft_bzero(s, size);
}
