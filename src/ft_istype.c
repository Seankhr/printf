/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skong <skong@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:04:47 by skong             #+#    #+#             */
/*   Updated: 2023/10/11 13:56:03 by skong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_istype(unsigned char c)
{
	char	*valid;

	valid = "cspdiuxX%";
	while (*valid)
	{
		if (c == *valid)
			return (1);
		else
			valid++;
	}
	return (0); 
}
