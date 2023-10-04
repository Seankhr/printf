#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int	printed_char;
	char	value_c;
	int	value_id;
	void	value_p;
	char	*value_s;
	char	buffer[32];

	printed_char = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				value_c = (char) va_arg(arg, int);
				ft_putchar (value_C);
				printed_char++;
				break;
			}
			else if (*format == 's')
			{
				value_s = va_arg(args, char*);
				ft_putstr(value_s);
				print_char += ft_strlen(value_s);
				break;
			}
			else if (*format == 'd' || *format == 'i')
			{
				value_id = va_arg(arg, int);
				ft_putstr(ft_itoa(value_I));
				printed_char += ft_strlen(ft_itoa(value_I));
				break;
			}
			else if (*format == 'p')
			{
				value_p = va_arg(arg, void*);
			}
			else 
			{	
				ft_putchar(format);
				printed_chars++;
			}
		}
		format++;
	} 
	va_end(args);
	return (printed_chars);
}
