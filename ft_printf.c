#include <stdarg.h>
#include <unistd.h>

#include "printf.h"


int ft_printf(const char *format, ...)
{
    va_list args;  
    va_start(args, format); 
    int i;
    char    symbol;
    int count;

    count = 0;
    i = 0;
    symbol = ft_printf_helper(format);
    while (format[i])
    {
        if (symbol == 'c')
            count += ft_putchar(va_arg(args, int));
        else if (symbol == 's')
            count += ft_putstr(va_arg(args, char *));
        else if (symbol == 'd' || symbol == 'i')
            count += ft_putnbr(va_arg(args, int));
        else if (symbol == 'p')
            count += ft_putptr(va_arg(args, void *));
        else if (symbol == 'x')
            count += ft_puthex_lower(va_arg(args, size_t));
        else if (symbol == 'X')
            count += ft_puthex_upper(va_arg(args, size_t));
        else if (symbol == 'u')
            count += ft_putunsigned(va_arg(args, unsigned int));
        else if (symbol == '\0')
            count += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return count;
}
