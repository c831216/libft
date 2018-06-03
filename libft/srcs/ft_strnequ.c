#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
        size_t i;
        
        i = 0;
        
        if (s1 == NULL || s2 == NULL)
                return (0);
                
        if ((ft_strlen(s1)) != (ft_strlen(s2)))
                return (0); 
                
        while(s1[i] && i < n)
        {
                if(s1[i] != s2[i])
                        return (0);
                i++;    
        }       
        
        if(s1[i] == s2[i])
                return (1);
                
        return (0);
}   	
