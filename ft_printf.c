/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 17:20:04 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/11/17 13:42:54 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	check(va_list args, const char *s)
{
	if (*s == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (*s == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (*s == 'd')
		return (ft_putnbr(va_arg(args, int)));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		strlen;
	int		i;
	va_list	args;

	strlen = 0;
	i = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			strlen += check(args, &s[i + 1]);
			i++;
		}
		else
			strlen += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (strlen);
}

int	main(void)
{
	char	*str;
	int		nb;

	str = "hallo hallo";
	nb = 123456;
	ft_printf("test: %d", nb);
}
