#include "ft_printf.h" 

int	ft_print_hex_u(unsigned long int n)
{
	int count; 
	char hex_digit;
	
	count = 0;  
	if (n >= 16)
		count +=  ft_print_hex_l(n/16);
	if (n % 16 < 10)
		hex_digit = '0' + (n % 16);
	else
		hex_digit = 'A' + (n % 16 - 10);
	
	ft_putchar(hex_digit); 
	count++;
	
	return count; 	
}
