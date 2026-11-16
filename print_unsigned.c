/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-qur <sal-qur@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 09:58:46 by sal-qur           #+#    #+#             */
/*   Updated: 2025/12/29 11:14:26 by sal-qur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n > 9)
		count += print_unsigned(n / 10);
	c = (n % 10) + '0';
	count += print_char(c);
	return (count);
}
/*int	main(void)
   {
   print_unsigned(9);
   }*/
