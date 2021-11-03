/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:22:15 by ajumbo            #+#    #+#             */
/*   Updated: 2021/11/03 10:36:16 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_switcher(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchr(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(ap, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putdec(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_putuns(va_arg(ap, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(ap, unsigned int), c));
	else if (c == 'X')
		return (ft_puthex(va_arg(ap, unsigned int), c));
	else
		return ((int)write(1, &c, 1));
}
