/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 05:47:59 by brice             #+#    #+#             */
/*   Updated: 2020/11/10 07:25:56 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_split(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	words;
	int		i;

	words = 0;
	i = 0;
	words = ft_count_split(s, c);

	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		if ()
	}
}
