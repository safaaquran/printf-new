/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_upper_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-qur <sal-qur@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 11:16:31 by sal-qur           #+#    #+#             */
/*   Updated: 2025/12/29 17:30:45 by sal-qur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_upper_hexa(unsigned long n)
{
	int		count;
	char	*s;

	count = 0;
	s = "0123456789ABCDEF";
	if (n == 0)
		return (print_char('0'));
	if (n >= 16)
		count += print_upper_hexa(n / 16);
	count += print_char(s[n % 16]);
	return (count);
}
