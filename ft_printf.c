/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 17:20:04 by nvan-str      #+#    #+#                 */
/*   Updated: 2023/01/25 14:37:50 by nvan-str      ########   odam.nl         */
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
	else if (*s == '%')
		return (ft_putchar('%'));
	else if (*s == 'p')
	{
		write (1, "0x", 2);
		return (ft_num_in_hex_low(va_arg(*args, unsigned long)) + 2);
	}
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

// int	main(void)
// {
// 	char			*str;
// 	int				nb;
// 	unsigned int	unb;
// 	char			c;

// 	str = "this works";
// 	nb = 123456;
// 	unb = -123;
// 	c = 'D';
// 	ft_printf("test number: %d", nb);
// 	ft_printf("\n----------------\n");
// 	ft_printf("test string: %s", str);
// 	ft_printf("\n----------------\n");
// 	ft_printf("test char: %c", c);
// 	ft_printf("\n----------------\n");

// 	ft_printf("test char:%c %c %c \n", '0', 0, '1');
// 	   printf("real char:%c %c %c ", '0', 0, '1');
// 	ft_printf("\n----------------\n");
// 	ft_printf("test char: %c %c %c \n", '1', '5', '3');
// 	printf("real char: %c %c %c ", '1', '2', '3');
// 	ft_printf("\n----------------\n");
// 	ft_printf("test char: %c %c %c \n", '2', '1', 0);
// 	printf("real char: %c %c %c ", '2', '1', 0);
// 	ft_printf("\n----------------\n");
// 	ft_printf("test interger: %i", nb);
// 	ft_printf("\n----------------\n");	
// 	ft_printf("test number: %u", unb);
// 	ft_printf("\n----------------\n");	
// 	ft_printf("test number: %%");
// 	ft_printf("\n");
// }
