/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 06:26:28 by brice             #+#    #+#             */
/*   Updated: 2020/11/07 07:22:05 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		flag;
	int		sign;

	flag = 0;
	sign = 1;
	if(n <= -2147483647 - 1)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	if (n / 10 && !flag)
		ft_putnbr_fd(n / 10, fd);
	flag = 1;
	c = n % 10 + '0';
	write (fd, &c, 1);
}
