#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_printf(const char *, ...);
void	ft_putchar(char c);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
char 	*ft_strdup(const char *s);
int	ft_istype(unsigned char c);
int	ft_print_char(char c);
int	ft_print_hex_l(unsigned long int n);
int	ft_print_hex_u(unsigned long int n);
int	ft_print_int(int n);
int	ft_print_ptr(void *ptr);
int	ft_print_str(const char *str);
int	ft_print_unsigned(unsigned int n);

#endif
