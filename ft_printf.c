/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 17:20:04 by nvan-str      #+#    #+#                 */
/*   Updated: 2023/03/06 15:22:57 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h> 

int	check(va_list *args, const char *s)
{
	if (*s == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (*s == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (*s == 'd' || *s == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (*s == 'u')
		return (ft_putnbr_unsigned(va_arg(*args, unsigned int)));
	else if (*s == 'x')
		return (ft_num_in_hex_low(va_arg(*args, unsigned int)));
	else if (*s == 'X')
		return (ft_num_in_hex_up(va_arg(*args, unsigned int)));
	else if (*s == 'p')
	{
		write (1, "0x", 2);
		return (ft_num_in_hex_low(va_arg(*args, unsigned long)) + 2);
	}
	else
		return (ft_putchar(*s));
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
			if (s[i + 1] == '\0')
			{
				i++;
				break ;
			}
			strlen += check(&args, &s[i + 1]);
			i++;
		}
		else
			strlen += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (strlen);
}
