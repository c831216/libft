/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:28:43 by csolomo           #+#    #+#             */
/*   Updated: 2018/06/01 13:35:32 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	if (size > 2147483647)
		return NULL;

	void *newmem = malloc (size);
	if(newmem == NULL)
		return NULL;	

	ft_bzero(newmem, size);
	return (newmem);
}

