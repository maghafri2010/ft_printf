#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>


int     ft_putchar(char c);
int    ft_putstr(char *str);
int    ft_putnbr(int nb);
int     ft_printf(const char *format, ...);
int     ft_putptr(void *ptr);
int     ft_puthex_lower(size_t nbr);
int     ft_puthex_upper(size_t nbr);
int ft_putunsigned(unsigned int nbr);
char ft_printf_helper(const char *format);



#endif