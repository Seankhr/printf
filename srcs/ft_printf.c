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
			case 'd':
			{
				int value = va_args(args, int);
				printed_chars = 

	
 
	va_end(args);

	return printed_chars;

