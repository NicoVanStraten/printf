/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 17:20:04 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/11/18 19:53:19 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	check(va_list args, const char *s)
{
	if (*s == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*s == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*s == 'd' || *s == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (*s == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (*s == 'x')
		return (ft_num_in_hex(va_arg(args, int)));
	else if (*s == 'X')
		return (ft_num_in_hex(va_arg(args, int)));
	else if (*s == 'p')
		return ();
	else if (*s == '%')
		return (ft_putchar('%'));
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
	char			*str;
	int				nb;
	unsigned int	unb;
	char			c;

	str = "this works";
	nb = 123456;
	unb = -123;
	c = 'D';
	ft_printf("test number: %d", nb);
	ft_printf("\n----------------\n");
	ft_printf("test string: %s", str);
	ft_printf("\n----------------\n");
	ft_printf("test char: %c", c);
	ft_printf("\n----------------\n");
	ft_printf("test interger: %i", nb);
	ft_printf("\n----------------\n");
	ft_printf("test number: %u", unb);
	ft_printf("\n----------------\n");
	ft_printf("test number: %%");
	ft_printf("\n");
	
}
