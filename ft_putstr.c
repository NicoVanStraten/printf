/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 16:14:53 by nvan-str      #+#    #+#                 */
/*   Updated: 2023/03/06 12:52:28 by nicolaasvan   ########   odam.nl         */
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
	if (str == NULL)
		return (write (1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}
