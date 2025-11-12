/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdo <mabdo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:46:02 by amaghafr          #+#    #+#             */
/*   Updated: 2025/11/12 00:51:19 by mabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr >= 10)
		count += ft_putunsigned(nbr / 10);
	count += ft_putchar((nbr % 10) + '0');
	return (count);
}
