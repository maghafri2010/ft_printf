/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghafr <amaghafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:14:10 by amaghafr          #+#    #+#             */
/*   Updated: 2025/11/09 13:33:17 by amaghafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char ft_printf_helper(const char *format)
{
    char symbol = '\0';
    int n = 0;
    int i = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            while (format[i] == '%')
            {
                n++;
                i++;
            }
            int print  = n / 2 ;
           
            while (print > 0)
            {
                write(1, "%", 1);
                print--;
            }
            n = 0;

            if (format[i] == 'c' || format[i] == 's' || format[i] == 'd' || format[i] == 'i' || format[i] == 'p' || format[i] == 'x' || format[i] == 'X' || format[i] == 'u')
                symbol = format[i++];
        }
        i++;
    }
    return symbol;
}

