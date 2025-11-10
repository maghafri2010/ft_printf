#include <stdarg.h>
#include <unistd.h>

#include "printf.h"


int ft_printf(const char *format, ...)
{
    va_list args;  
    va_start(args, format); 
    int i;
    int count;

    count = 0;
    i = 0;
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            if (format[i] == '%')
                count += write(1, "%", 1);
            else if (format[i] == 'c')
                count += ft_putchar(va_arg(args, int));
            else if (format[i] == 's')
                count += ft_putstr(va_arg(args, char *));
            else if (format[i] == 'd' || format[i] == 'i')
                count += ft_putnbr(va_arg(args, int));
            else if (format[i] == 'p')
                count += ft_putptr(va_arg(args, void *));
            else if (format[i] == 'x')
                count += ft_puthex_lower(va_arg(args, size_t));
            else if (format[i] == 'X')
                count += ft_puthex_upper(va_arg(args, size_t));
            else if (format[i] == 'u')
                count += ft_putunsigned(va_arg(args, unsigned int));
        }
        else 
            count += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return count;
}

