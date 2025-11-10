/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghafr <amaghafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:42:29 by amaghafr          #+#    #+#             */
/*   Updated: 2025/11/10 19:43:44 by amaghafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_puthex_upper(size_t nbr)
{
	char	*base;
	int		count;
	char	digit[32];
	int		i;

	base = "0123456789ABCDEF";
	count = 0;
	i = 0;
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
