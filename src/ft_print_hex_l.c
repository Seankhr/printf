/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_l.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skong <skong@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:06:35 by skong             #+#    #+#             */
/*   Updated: 2023/10/12 12:21:55 by skong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h" 

int	ft_print_hex_l(unsigned long int n)
{
	int		count;
	char	hex_digit;

	count = 0;
	if (n >= 16)
		count += ft_print_hex_l (n / 16);
	if (n % 16 < 10)
		hex_digit = '0' + (n % 16);
	else
		hex_digit = 'a' + (n % 16 - 10);
	ft_putchar(hex_digit);
	count++;
	return (count);
}
