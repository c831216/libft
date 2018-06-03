#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{/*
	char	*str;
	int	i;
	int	j;

	if (s != NULL && f != NULL)
	{
		i = 0;
		j = ft_strlen(s);

		str = (char *)malloc(sizeof(s)+1);
		if(str == NULL)
			return NULL;

		while (s[i] < j && s[i] != '\0')
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}*/

	size_t	i;
	char	*fresh;

	if (s == NULL || f == NULL)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s));
	if(fresh == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		fresh[i] = (*f)(s[i]);
		i++;
	}
	return (fresh);
}
