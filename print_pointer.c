/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-qur <sal-qur@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:53:35 by sal-qur           #+#    #+#             */
/*   Updated: 2025/12/29 17:30:20 by sal-qur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *p)
{
	unsigned long	address;
	int				count;

	count = 0;
	address = (unsigned long)p;
	if (address == 0)
		return (print_string("(nil)"));
	count += print_string("0x");
	count += print_lower_hexa(address);
	return (count);
}
