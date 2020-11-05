/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 06:10:55 by brice             #+#    #+#             */
/*   Updated: 2020/11/05 06:40:31 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;
	int		i;

	i = 0;
	new = (void *)malloc(count * size);
	if (new == NULL)
		return (NULL);
	while (*((int *)new + i))
	{
		*((int *)new + i) = 0;
		i++;
	}
	return (new);
}
