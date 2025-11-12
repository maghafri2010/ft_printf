/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdo <mabdo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:38:42 by amaghafr          #+#    #+#             */
/*   Updated: 2025/11/12 00:53:01 by mabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_printf(const char *format, ...);
int	ft_putptr(void *ptr);
int	ft_puthex_lower(unsigned int nbr);
int	ft_puthex_upper(unsigned int nbr);
int	ft_putunsigned(unsigned int nbr);

#endif