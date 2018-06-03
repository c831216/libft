#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char		*fresh;

	if (s == NULL || f == NULL)
		return (NULL);

	fresh = ft_strnew(ft_strlen(s));
	
	if(fresh == NULL)
		return NULL;

	i = 0;
	while (s[i])
	{
		fresh[i] = (*f)(i, s[i]);
		i++;
	}
	return (fresh);
}
