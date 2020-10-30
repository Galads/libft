/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 09:50:49 by brice             #+#    #+#             */
/*   Updated: 2020/10/30 10:12:28 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;
	while (i <= (int)len)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}

int main()
{

char dest[10]="1234567890";
//char src[10]="XXXXXXXXXX";
/*
// Вывод массива src на консоль
   printf ("src old: %s\n",dest);

   // Копируем 3 байт
   memmove(&dest[4], &src[3], 3);

   // Вывод массива src на консоль
   printf("src new: %s\n",dest);
*/
// Вывод массива src на консоль
   printf ("dest old: %s\n",dest);

   // Копируем 3 байт
   memmove(&dest[4], &dest[3], 3);

   // Вывод массива src на консоль
   printf("dest new: %s\n",dest);
}
