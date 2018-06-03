#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t 	i;
	char	*fresh;
	
	i = 0;
	fresh = (char *) malloc (sizeof(char) *(len+1));
	if (fresh == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);

	while(i < len && s[start] != '\0')
	{
		fresh[i] = s[start];
		i++;
		start++;
	}
	fresh[i] = '\0';
	return (fresh);
}/*

char	*result;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if ((result = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}*/
