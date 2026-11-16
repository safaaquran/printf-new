/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-qur <sal-qur@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 09:25:13 by sal-qur           #+#    #+#             */
/*   Updated: 2025/12/29 17:28:04 by sal-qur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int_decimal(int n)
{
	int		count;
	char	c;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		count += print_char('-');
		n = -n;
	}
	if (n > 9)
		count += print_int_decimal(n / 10);
	c = (n % 10) + '0';
	count += print_char(c);
	return (count);
}
