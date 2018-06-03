/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 15:57:12 by csolomo           #+#    #+#             */
/*   Updated: 2018/05/30 15:57:14 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;
	unsigned char *ns1 = (unsigned char *)s1;
	unsigned char *ns2 = (unsigned char *)s2;

	i = 0;
	while (ns1[i] == ns2[i] && ns1[i] != '\0' && ns2[i] != '\0')
		i++;
	return (ns1[i] - ns2[i]);
}
