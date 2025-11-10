/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghafr <amaghafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:41:57 by amaghafr          #+#    #+#             */
/*   Updated: 2025/11/10 19:42:22 by amaghafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_puthex_lower(size_t nbr)
{
	char	*base;
	int		count;
	char	digit[32];
	int		i;

	count = 0;
	i = 0;
	base = "0123456789abcdef";
	if (nbr == 0)
		return (write(1, "0", 1));
	while (nbr > 0)
	{
		digit[i++] = base[nbr % 16];
		nbr /= 16;
	}
	i--;
	while (i >= 0)
	{
		write(1, &digit[i], 1);
		count++;
		i--;
	}
	return (count);
}
