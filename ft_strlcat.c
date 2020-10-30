/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:33:08 by brice             #+#    #+#             */
/*   Updated: 2020/10/30 14:57:10 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*((char *)dst + i) != '\0')
		i++;
	while(i < (int)dstsize - 1)
	{
		*((char *)dst + i) = *((char *)src + j);
		i++;
		j++;
	}
//	i++;
	return (++i);
}

int main()
{
	
	const char *str = "obrazec stroki";//14
	size_t sz;
			//10
	char  buf[25] = "1234567890";                   // избыточная инициализация для отладочной печати

	const char *str_main = "obrazec stroki";//14
	size_t sz_main;
			//10
	char  buf_main[25] = "1234567890"; 
	
	printf("==================================TEST============================\n");

	printf("строка: \"%s\"\n\n", str);
	printf("буфер перед копированием: \"%s\"\n", buf);

	sz = strlcat(buf, str, -0);
	printf("sz, return strlcat: %zu\n", sz);
	//if (sz >= sizeof(buf))      
     // printf("обнаружено усечение строки с %zu до %lu символов !\n", sz, sizeof(buf)-1);

   printf("буфер после копирования:  \"%s\"\n", buf);

   printf("==================================MAIN============================\n");

	printf("строка: \"%s\"\n\n", str_main);
	printf("буфер перед копированием: \"%s\"\n", buf_main);

	sz_main = ft_strlcat(buf_main, str_main, 9);
	printf("sz, return strlcat: %zu\n", sz_main);
	//if (sz >= sizeof(buf))      
     // printf("обнаружено усечение строки с %zu до %lu символов !\n", sz, sizeof(buf)-1);

   printf("буфер после копирования:  \"%s\"\n", buf_main);
}

