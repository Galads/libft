/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:44:08 by brice             #+#    #+#             */
/*   Updated: 2020/10/28 15:58:01 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
        *((char *)s + i++) = '\0';
}

int main()
{

    //int n = 1024 * 1024 * 1024 * 1;
    //char buf[n];
    char src[15]="1234567890";
    char src1[15]="1234567890";
    printf("src: %s\n",src);
    ft_bzero(src, 4);
    bzero(src1, 4);
    printf("src: %s\n", src);
}
