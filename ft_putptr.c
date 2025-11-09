/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghafr <amaghafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:54:31 by amaghafr          #+#    #+#             */
/*   Updated: 2025/11/09 12:39:04 by amaghafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putptr(void *ptr)
{
    write(1, "0x", 2);
    if (!ptr)
    {
        write(1, "0", 1);
        return 3;
    }
    char *base = "0123456789abcdef";
    int count = 0;
    size_t cast;
    char digit[32];
    int i = 0;

    count = 2;

    cast = (size_t)ptr;
    
    while (cast > 0)
    {
        digit[i++] = base[cast % 16];
        cast /= 16;
    }
    i--;
    while (i >= 0)
    {
        write(1, &digit[i], 1);
        count++;
        i--;
    }
    

    return count;

}