/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 13:47:44 by csolomo           #+#    #+#             */
/*   Updated: 2018/05/29 13:47:46 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;
    unsigned char *ns1 = (unsigned char *)s1;
    unsigned char *ns2 = (unsigned char *)s2;

    while(i < n)
    {
      if(ns1[i] != ns2[i])
        return (ns1[i] - ns2[i]);
      i++;
    }
    return (0);
}
