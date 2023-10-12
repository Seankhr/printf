/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skong <skong@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:06:04 by skong             #+#    #+#             */
/*   Updated: 2023/10/12 12:25:09 by skong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	char	*str;
	int		count;

	str = ft_utoa(n);
	if (!str)
		return (0);
	count = ft_print_str(str);
	free(str);
	return (count);
}
