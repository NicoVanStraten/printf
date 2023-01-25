/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 16:58:18 by nvan-str      #+#    #+#                 */
/*   Updated: 2023/01/25 14:28:13 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

// printf functie
int	ft_printf(const char *s, ...);

// functions for printf
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_num_in_hex_low(unsigned long n);
int	ft_num_in_hex_up(unsigned long n);

#endif 