/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 12:16:59 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/11/11 16:23:55 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	ft_putnbr(int n)
{
	int	i;
	int	printlen;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (12);
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
		printlen++;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	i = n % 10 + 48;
	write (1, &i, 1);
	printlen++;
	return (printlen);
}
