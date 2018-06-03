#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t start;
	size_t end;
	size_t len;
	size_t	i;
	size_t 	j;
	
	start = 0;
	len = ft_strlen(s);
	end = len;
	i = 0;
	j = 0;

	while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'|| s[i] == 32)
		start++;
		i++;
	i = len;
	while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'|| s[i] == 32)
                end--;
                i--;
//we now know what the start is and the ending

	char *fresh;
	size_t sizetomalloc;
	sizetomalloc = (len - start)+(len - end);
	fresh = (char *) malloc (sizeof(sizetomalloc));
	i = 0;

	while(start <= end)
	{
		fresh[j] = s[start];
		j++;
		start++;	
	}
	fresh[end] = '\0';
	return (fresh);
}

/*	
Lets find the beginning store it as start
find the last one from the back and store it as end.

I have space at the end that I need to trim now
if white space skip skip until

strchr find first and find last then only assign
character (non-white space) to fresh	*/

