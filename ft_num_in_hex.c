/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_num_in_hex.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/18 13:43:40 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/12/02 10:42:04 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_num_in_hex(int n)
{
	int	printlen;

	printlen = 0;
	if (n < 0)
	{
		write (1, "-", 1);
		printlen++;
		if (n < -9)
			printlen += ft_putnbr(-(n / 16));
		ft_putchar(-(n % 16) + 48);
		printlen++;
	}
	else
	{
		if (n >= 10)
			printlen += ft_putnbr(n / 16);
		ft_putchar((n % 16) + '0');
		printlen++;
	}
	return (printlen);
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	c;

// 	a = 120;
// 	b = 30;
// 	c = 2;
// 	printf("real function x : %x %x %x", a, b, c);
// 	printf("\n⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶⎶\n");
// 	printf("real function X : %X %X %X", a, b, c);
// }
