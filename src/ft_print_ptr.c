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
