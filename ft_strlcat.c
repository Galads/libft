/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:33:08 by brice             #+#    #+#             */
/*   Updated: 2020/11/02 11:54:31 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (dstsize <= 0)
        return (*dst);
    while (*(dst + i) && i < dstsize)
        i++;
    j = i;
    while (i + 1 < dstsize && src[i - j] != '\0')
    {
        *(dst + i) = *(src + j);
        i++;
        j++;
    }
    *(dst + i) = '\0';
    return (i);
}
