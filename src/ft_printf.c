#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	printed_chars
	
	printed_chars = 0;
	va_start(args, format);
	while (*format == '%')
	{
		format++;
		switch (*format)
		{
			case 'c':
			{
				char value = (char) va_arg(arg, int)
				write(1, &value, 1);
				printed_chars++;
				break;
			}
			

	
 
	va_end(args);

	return printed_chars;

