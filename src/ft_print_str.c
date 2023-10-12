/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skong <skong@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:07:10 by skong             #+#    #+#             */
/*   Updated: 2023/10/12 12:24:35 by skong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_str(const char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		ft_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
