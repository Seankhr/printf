/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:07:23 by skong             #+#    #+#             */
/*   Updated: 2023/09/20 20:21:00 by skong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	convert_to_str(unsigned int n, char *str, int len)
{
	str[len] = '\0';
	len--;
	if (n == 0)
		str[len] = '0';
	while (n > 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
}

char	*ft_utoa(unsigned int n)
{
	char	*result;
	int		len;

	len = ft_numlen(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	convert_to_str(n, result, len);
	return (result);
}
