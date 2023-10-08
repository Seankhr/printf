#include "ft_printf.h" 

int	ft_print_unsigned(unsigned int n)
{
	char	*str; 
	int	count;

	str = ft_utoa(n);
	if (!str)
		return (0);
	count = ft_print_str(str);
	free(str);
	return (count); 
}
