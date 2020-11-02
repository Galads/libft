/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 09:50:49 by brice             #+#    #+#             */
/*   Updated: 2020/11/02 12:53:12 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    int i;

    i = 0;
    unsigned char *dst_val;
    unsigned char *src_val;

    dst_val = (unsigned char *)dst;
    src_val = (unsigned char *)src;

    if (dst_val == src_val)
        return (dst_val);
    if (dst_val > src_val)
    {
        while (len--)
            dst_val[len] = src_val[len];
    } else {
        while (i < (int)len)
        {
            dst_val[i] = src_val[i];
            i++;
        }
    }
    return (dst);
}
