/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:30:50 by csolomo           #+#    #+#             */
/*   Updated: 2018/05/25 09:30:54 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
     {
        int i;
	    int j;

	    if (needle[0] == '\0')
	        return ((char *)haystack);
	    i = 0;
	    while (haystack[i] != '\0')
	    {
	    	j = 0;
	    	while (needle[j] != '\0')
	    	{
	    		if (haystack[i + j] != needle[j])
	    			break ;
	    		j++;
	    	}
	    	if (needle[j] == '\0')
	    		return ((char *)haystack + i);
	    	i++;
	    }
	    return (0);
     }
