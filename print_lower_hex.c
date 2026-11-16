/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lower_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-qur <sal-qur@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 11:16:31 by sal-qur           #+#    #+#             */
/*   Updated: 2025/12/29 13:42:34 by sal-qur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_lower_hexa(unsigned long n)
{
	int		count;
	char	*s;

	count = 0;
	s = "0123456789abcdef";
	if (n == 0)
		return (print_char('0'));
	if (n >= 16)
		count += print_lower_hexa(n / 16);
	count += print_char(s[n % 16]);
	return (count);
}
