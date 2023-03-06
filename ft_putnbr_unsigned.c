/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_unsigned.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/16 11:11:37 by nvan-str      #+#    #+#                 */
/*   Updated: 2023/03/06 12:58:11 by nicolaasvan   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <stdio.h>

int	ft_putnbr_unsigned(unsigned int n)
{
	int	printlen;

	printlen = 0;
	if (n >= 10)
		printlen += ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	printlen++;
	return (printlen);
}
