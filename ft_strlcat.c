/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:33:08 by brice             #+#    #+#             */
/*   Updated: 2020/11/04 17:08:21 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
//	printf("hey1\n");
    size_t i;
	size_t j;
	size_t r;
	size_t k;

	i = 0;
	k = 0;
	j = ft_strlen(src);
	while (dst[i] != '\0' && i < dstsize)
	      i++;
	if (dstsize >= -1u)
		return (j + i);
	r = (j + i);
	if (dstsize <= i)
		return (j + dstsize);
//	dstsize = dstsize - i - 1;

//	printf("+++++++++++++++++++++++++++++++++++++\n");
//	printf("test print dst -> %d, dstsize = %ld, i = %ld\n", dst[i], dstsize, i);
//	printf("test print src -> %s\n", src);
//
//	printf("+++++++++++++++++++++++++++++++++++++\n");
	while ((i + k + 1) < dstsize  && src[k])
	{
		dst[i] = src[k];
		i++;
		k++;
		//dstsize--;
	}
	dst[i] = '\0';
	return (r);
}
