/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:29:09 by csolomo           #+#    #+#             */
/*   Updated: 2018/05/29 12:51:20 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int		i;
	char	*nstr;

	i = 0;
	nstr = (char *)str;
	while (n > 0)
	{
		if (nstr[i] == c)
		{
			return (nstr + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
