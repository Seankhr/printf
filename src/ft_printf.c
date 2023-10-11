#include "ft_printf.h"

int ft_print_arg(char c, va_list arg)
{
	int count; 

	count = 0; 
	if (c == '%')
		count += ft_print_char('%');
	else if (c == 'c')
		count += ft_print_char(va_arg(arg, int)); 
	else if (c == 's')
		count += ft_print_str(va_arg(arg, const char *));
	else if (c =='p')
		count += ft_print_ptr(va_arg(arg, void *));
	else if (c == 'd' || c =='i')
		count += ft_print_int(va_arg(arg, int)); 
	else if (c == 'u')
		count += ft_print_unsigned(va_arg(arg, int));
	else if (c == 'x')
		count += ft_print_hex_l(va_arg(arg, unsigned int)); 
	else if (c == 'X')
		count += ft_print_hex_u(va_arg(arg, unsigned int));
	return (count);
}

int ft_parse(char *str, va_list arg)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			if (ft_istype(str[i]))
			{
				count = count + ft_print_arg(str[i], arg);
				i++;
			}
			else if (str[i] != '\0')
			{
				count = count + ft_print_char(str[i]);
				i++;
			}
		}
		else
		{
			count = count + ft_print_char(str[i]);
			i++;
		}
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int 	count; 
	char	*str;

	if (!format || *format  == '\0')
		return (0); 
	str = ft_strdup(format);
	count = 0; 
	va_start(args, format); 
	count = ft_parse(str, args);
	va_end(args);
	free(str);
	return (count);
}
