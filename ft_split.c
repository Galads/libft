/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 05:47:59 by brice             #+#    #+#             */
/*   Updated: 2020/11/11 07:13:38 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_split(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	if (count == 0 && s[i - 1] != c)
		count++;
	return (count);
}

static	void	ft_clear_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

static	size_t	ft_strlen_char(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static	size_t	ft_split_words(char **str, const char *s, char c)
{
	size_t	j;
	size_t	i;
	size_t	k;

	j = 0;
	i = 0;
	while (j < ft_count_split(s, c) && s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (!(str[j] = (char *)malloc(sizeof(char) *
											(ft_strlen_char(&s[i], c) + 1))))
		{
			ft_clear_arr(str);
			return (0);
		}
		while (s[i] != c && s[i] != '\0' && str[j] != '\0')
		{
			str[j][k] = s[i++];
			k++;
		}
		str[j++][k] = '\0';
	}
	return (j);
}

char			**ft_split(char const *s, char c)
{
	char	**str;
	int		j;

	j = 0;
	if (!s)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) *
											(ft_count_split(s, c) + 1))))
		return (NULL);
	if (!(j = ft_split_words(str, s, c)))
		return (NULL);
	str[j] = NULL;
	return (str);
}
