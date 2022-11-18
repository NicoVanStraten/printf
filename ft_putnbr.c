/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 12:16:59 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/11/17 16:15:16 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	printlen;

	printlen = 0;
	if (n < 0)
	{
		write (1, "-", 1);
		printlen++;
		if (n < -9)
			printlen += ft_putnbr(-(n / 10));
		ft_putchar(-(n % 10) + 48);
		printlen++;
	}
	else
	{
		if (n >= 10)
			printlen += ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
		printlen++;
	}
	return (printlen);
}

// int	main(void)
// {
// 	int n;

// 	n = 10000;
// 	ft_putnbr(n);
// }
