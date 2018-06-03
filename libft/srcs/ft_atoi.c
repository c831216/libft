/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:08:41 by csolomo           #+#    #+#             */
/*   Updated: 2018/05/31 13:09:28 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int	i;
	int	sign;
	int nstr;

	i = 0;
	sign = 1;
	nstr = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (isdigit(str[i]) == 1)
	{
		nstr = (nstr * 10) + (str[i] - 48);
		i++;
	}
	return (nstr * sign);
}
