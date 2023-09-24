#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	printed_chars
	
	printed_chars = 0;

	va_start(args, format);
    // You will iterate over the format string
    // and handle each conversion as required.
    // The printed_chars should be incremented
    // with the number of chars you print.
	va_end(args, format);

	return printed_chars;

