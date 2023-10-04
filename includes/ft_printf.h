#ifdef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
char	*ft_itoa(int n);
char 	*ft_strdup(const char *s);
unsigned long	ft_strlen(const char *c);

#endif
