/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 09:00:14 by brice             #+#    #+#             */
/*   Updated: 2020/10/30 09:49:46 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	int i;

	i = 0;
	while(i <= (int)n)
	{
		*((char *)dst + i) = *((char *)src + i);
		if(*((char *)dst + i) == c)
			return (dst);
		i++;
	}
	return (0);
}

int main()
{
 unsigned char src[15]="1234567890";

   // Массив приемник данных
   unsigned char dst[15]="";

   printf("dst_first: %s\n",src);
   /*
   // Копируем данные из массива src в массив dst


   printf("return_memcpy: %c\n", memccpy (dst, src,'5', 10));
   // Вывод массива dst на консоль


   
   printf("dst: %s\n",dst);
   */

   printf("return_memcpy: %s\n", ft_memccpy(dst, src,'e', 10));
   
   printf("dst: %s\n",dst);
}
