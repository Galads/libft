/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:07:29 by brice             #+#    #+#             */
/*   Updated: 2020/10/30 16:30:40 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int i;

	i = 0;
	
	while(i < (int)dstsize - 1)
	{
		*((char *)dst + i) = *((char *)src + i); 
		i++;
	}
	*((char *)dst + i) = '\0';
	while(*((char *)src + i) != '\0')
		i++;
	return (i);
}

int main()
{
	const char *str = "obrazec stroki"; //14
	const char *str_main = "obrazec stroki";
	
	size_t sz;
	size_t sz_main;

	char  buf[10];
	buf[9] = '\0';

	char  buf_main[10];
	buf[9] = '\0';

printf ("==================================TEST============================\n");

printf ("sizeof: %lu\n", sizeof(buf));
printf("буфер перед копированием: \"%s\"\n", buf);

sz = strlcpy(buf, str, 2);

printf ("sz: %lu\n", sz);
//printf("return strlcpy: %d\n", (int)sz);
printf("буфер после копирования:  \"%s\"\n", buf);

printf ("==================================MAIN============================\n");

//printf ("strlen: %lu\n", strlen(buf));
printf ("sizeof: %lu\n", sizeof(buf_main));
printf("буфер перед копированием: \"%s\"\n", buf_main);

sz_main = ft_strlcpy(buf_main, str_main, 2);

printf ("sz: %lu\n", sz_main);
//printf("return strlcpy: %d\n", (int)sz);
printf("буфер после копирования:  \"%s\"\n", buf_main);

}
