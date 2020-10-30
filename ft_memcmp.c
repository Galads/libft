/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 10:38:27 by brice             #+#    #+#             */
/*   Updated: 2020/10/30 11:05:20 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>  //Для printf
#include <string.h>   //Для memcmp

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;
	while(i <= (int)n)
	{
		if(*((unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		i++;
	}
	return (0);
}
int main()
{
 // Исходные массивы
   unsigned char src[15]="1234567890";
   unsigned char dst[15]="1234567890";
printf ("==================================TEST============================\n");
   // Сравниваем первые 10 байт массивов
   // и результат выводим на экран
  printf("return memcmp: %d\n", memcmp(src, dst, 10));
   if (memcmp(src, dst, 10) == 0)
	   puts ("Области памяти идентичные.\n");
   else
	   puts ("Области памяти отличаются.\n");

printf ("==================================MAIN============================\n");
   printf("return ft_memcmp: %d\n", ft_memcmp(src, dst, 10));
}
