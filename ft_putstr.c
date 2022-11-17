/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 16:14:53 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/11/17 13:25:42 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}

// int	main(void)
// {
// 	char	*str;

// 	str = "hallo ik ben nicolaasbal bla bla bla";
// 	ft_putstr(str);
// }
