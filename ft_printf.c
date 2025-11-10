/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghafr <amaghafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:53:22 by amaghafr          #+#    #+#             */
/*   Updated: 2025/11/10 12:05:18 by amaghafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	int	identifing_the_arg(va_list args, char c )
{
	int	count;

	count = 0;
	if (c == '%')
		count += write(1, "%", 1);
	else if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (c == 'x')
		count += ft_puthex_lower(va_arg(args, size_t));
	else if (c == 'X')
		count += ft_puthex_upper(va_arg(args, size_t));
	else if (c == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += identifing_the_arg(args, format[i]);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
