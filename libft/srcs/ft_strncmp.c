/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:06:58 by csolomo           #+#    #+#             */
/*   Updated: 2018/05/30 16:07:00 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	unsigned char *ns1 = (unsigned char *)s1;
	unsigned char *ns2 = (unsigned char *)s2;

	i = 0;
	while (ns1[i] == ns2[i] && ns1[i] != '\0' && ns2[i] != '\0'&& n > 0)
	{
		i++;
		n--;
	}
	return (ns1[i] - ns2[i]);
}
