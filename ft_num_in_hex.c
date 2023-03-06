/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_num_in_hex.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/18 13:43:40 by nvan-str      #+#    #+#                 */
/*   Updated: 2023/03/06 15:30:54 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_num_in_hex_low(unsigned long n)
{
	char			c;
	unsigned long	nbr;
	int				total;

	nbr = n;
	total = 0;
	if (nbr >= 16)
	{
		total += ft_num_in_hex_low((nbr / 16));
		if (nbr % 16 < 10)
			c = (nbr % 16) + '0';
		else
			c = (nbr % 16) + 87;
		total += write(1, &c, 1);
	}
	if (nbr < 16)
	{
		if (nbr % 16 < 10)
			c = (nbr % 16) + '0';
		else
			c = (nbr % 16) + 87;
		total += write(1, &c, 1);
	}
	return (total);
}

int	ft_num_in_hex_up(unsigned long n)
{
	char			c;
	unsigned long	nbr;
	int				total;

	nbr = n;
	total = 0;
	if (nbr >= 16)
	{
		total += ft_num_in_hex_up((nbr / 16));
		if (nbr % 16 < 10)
			c = (nbr % 16) + '0';
		else
			c = (nbr % 16) + 55;
		total += write(1, &c, 1);
	}
	if (nbr < 16)
	{
		if (nbr % 16 < 10)
			c = (nbr % 16) + '0';
		else
			c = (nbr % 16) + 55;
		total += write(1, &c, 1);
	}
	return (total);
}
