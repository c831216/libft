#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{/*
	if (!s1 || !s2)
		return (NULL);

	char *fresh;

	fresh = (char *) malloc((sizeof(s1)) + (sizeof(s2)));
	if (fresh == NULL)
		return (NULL);
	
	fresh = ft_strcat((char *)s1,(char *)s2);
	return (fresh);
}*/

char	*str;
	int	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	
	if (str == NULL)
		return (NULL);
	
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}

