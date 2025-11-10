/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghafr <amaghafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:54:31 by amaghafr          #+#    #+#             */
/*   Updated: 2025/11/10 19:50:00 by amaghafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putptr(void *ptr)
{
	char	*base;
	int		count;
	size_t	cast;
	char	digit[32];
	int		i;

	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	i = 0;
	count = 2;
	base = "0123456789abcdef";
	cast = (size_t)ptr;
	while (cast > 0)
	{
		digit[i++] = base[cast % 16];
		cast /= 16;
	}
	i--;
	while (i >= 0)
		count += write(1, &digit[i--], 1);
	return (count);
}
