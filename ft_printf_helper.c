/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdo <mabdo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:14:10 by amaghafr          #+#    #+#             */
/*   Updated: 2025/11/10 11:03:34 by mabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char ft_printf_helper(const char *format)
{
    char symbol = '\0';
    int i = 0;
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;

            if (format[i] == 'c' || format[i] == 's' || format[i] == 'd' || format[i] == 'i' || format[i] == 'p' || format[i] == 'x' || format[i] == 'X' || format[i] == 'u')
                return format[i];
        }
        i++;
    }
    return symbol;
}

