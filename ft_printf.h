/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-qur <sal-qur@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 11:15:03 by sal-qur           #+#    #+#             */
/*   Updated: 2025/12/31 15:18:59 by sal-qur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	print_char(char c);
int	print_string(char *s);
int	print_int_decimal(int n);
int	print_unsigned(unsigned int n);
int	print_lower_hexa(unsigned long n);
int	print_upper_hexa(unsigned long n);
int	print_pointer(void *p);
int	ft_printf(const char *str, ...);

#endif
