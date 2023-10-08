#include "ft_printf.h"

int	ft_istype(unsgined char c)
{
	char	*valid;

	valid = "cspdiuxX%"
	while (*valid)
	{
		if(c == *valid)
			return (1);
		else
			valid++;
	}
	return (0); 
}
