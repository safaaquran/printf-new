/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-qur <sal-qur@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 14:30:22 by sal-qur           #+#    #+#             */
/*   Updated: 2025/12/31 15:31:30 by sal-qur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putarg(char c, va_list args)
{
	if (c == 'c')
		return (print_char((char)va_arg(args, int)));
	if (c == 's')
		return (print_string(va_arg(args, char *)));
	if (c == 'd' || c == 'i' )
		return (print_int_decimal(va_arg(args, int)));
	if (c == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	if (c == 'p')
		return (print_pointer(va_arg(args, void *)));
	if (c == 'x')
		return (print_lower_hexa(va_arg(args, unsigned int)));
	if (c == 'X')
		return (print_upper_hexa(va_arg(args, unsigned int)));
	if (c == '%')
		return (print_char('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += putarg(str[i], args);
		}
		else
			count += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
