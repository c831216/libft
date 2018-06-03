/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:52:38 by csolomo           #+#    #+#             */
/*   Updated: 2018/05/25 12:52:40 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
    int i = 0;
    int j = 0;
    //int len = 0;

//    char s1[50] = "basket add here___ ";
  //  char s2[50] = "stuff";

//    printf("%s\n", s1);
  //  printf("%s\n", s2);

    while(s1[i] != '\0')
    {
        i++;
    }
    //len = i;

    while(s2[j] != '\0' && n > 0)
    {
        s1[i] = s2[j];
        i++;
        j++;
        n--;
    }
    s1[i] = '\0';
    //printf("%s\n", s1);
    return (s1);
}
