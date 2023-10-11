/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skong <skong@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:05:46 by skong             #+#    #+#             */
/*   Updated: 2023/10/11 17:36:12 by skong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	count; 

	count = 0; 
	ft_print_str("0x");
	count += 2; 
	count += ft_print_hex_l((unsigned long int) ptr);
	return (count); 
}
