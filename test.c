#include "includes/ft_printf.h"
#include <stdio.h>

void test_char()
{
    char c = 'A';
    printf("Expected [printf]: %c\n", c);
    ft_printf("Your ft_printf: %c\n\n", c);
}

void test_string()
{
    char *str = "Hello, World!";
    printf("Expected [printf]: %s\n", str);
    ft_printf("Your ft_printf: %s\n\n", str);
}

void test_decimal()
{
    int d = 12345;
    printf("Expected [printf]: %d\n", d);
    ft_printf("Your ft_printf: %d\n\n", d);
}

void test_integer()
{
    int i = -54321;
    printf("Expected [printf]: %i\n", i);
    ft_printf("Your ft_printf: %i\n\n", i);
}

void test_hex_lower()
{
    int x = 255;
    printf("Expected [printf]: %x\n", x);
    ft_printf("Your ft_printf: %x\n\n", x);
}

void test_hex_upper()
{
    int X = 255;
    printf("Expected [printf]: %X\n", X);
    ft_printf("Your ft_printf: %X\n\n", X);
}

void test_unsigned()
{
    unsigned int u = 1234567890;
    printf("Expected [printf]: %u\n", u);
    ft_printf("Your ft_printf: %u\n\n", u);
}

void test_pointer()
{
    int var = 42;
    printf("Expected [printf]: %p\n", &var);
    ft_printf("Your ft_printf: %p\n\n", &var);
}

void test_percent()
{
    printf("Expected [printf]: %%\n");
    ft_printf("Your ft_printf: %%\n\n");
}

int main(void)
{
    printf("---- Testing ft_printf ----\n\n");
    
    test_char();
    test_string();
    test_decimal();
    test_integer();
    test_hex_lower();
    test_hex_upper();
    test_unsigned();
    test_pointer();
    test_percent();

    return 0;
}
