/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 10:13:16 by brice             #+#    #+#             */
/*   Updated: 2020/10/30 10:37:31 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include <stdio.h>
 #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while(i <= (int)n)
	{
		if (*((char *)s + i) == c)
			return &((*((char *)s + i)));
		i++;
	}
	return (0);
}

int main()
{
// Исходный массив
   
   unsigned char src[15]="1234567890";
   unsigned char src_main[15]="1234567890";
   // Переменная, в которую будет сохранен указатель
   // на искомый символ.
   char *sym;
   char *sym_main;

printf ("==================================TEST============================\n");
   // Вывод исходного массива
   printf ("src old: %s\n",src);

   // Поиск требуемого символа
   sym = memchr (src, 'e', 10); // char = 4

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym != NULL)
      sym[0]='!';

   // Вывод исходного массива
   printf ("sum new: %s\n",sym);
   printf ("src new: %s\n",src);

printf ("==================================MAIN============================\n");

printf ("src old: %s\n",src_main);

   // Поиск требуемого символа
   sym_main = ft_memchr(src_main, 'e', 10); //char = 4

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym_main != NULL)
      sym_main[0]='!';

   // Вывод исходного массива
   printf ("sum new: %s\n",sym_main);
   printf ("src new: %s\n",src_main);

}
