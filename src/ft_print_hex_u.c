/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skong <skong@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:05:27 by skong             #+#    #+#             */
/*   Updated: 2023/10/11 13:47:25 by skong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_print_hex_u(unsigned long int n)
{
	int		count; 
	char	hex_digit;

	count = 0;
	if (n >= 16)
		count += ft_print_hex_u(n / 16);
	if (n % 16 < 10)
		hex_digit = '0' + (n % 16);
	else
		hex_digit = 'A' + (n % 16 - 10);
	ft_putchar(hex_digit);
	count++;
	return (count);
}
