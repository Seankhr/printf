#include "ft_printf.h"

int	ft_print_str(const char *str)
{
	int	 count; 
	
	count = 0;
	while (*str)
	{
		ft_putchar(*str);
		str++;  
		count++;
	}
	return (count); 
}
