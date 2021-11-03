/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:41:40 by ajumbo            #+#    #+#             */
/*   Updated: 2021/11/03 10:41:41 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(unsigned long long nbr, char *base)
{
	int	i;
	unsigned int limit;

	i = 0;
	limit = ft_strlen(base);
	if (nbr >= limit)
	{
		i += ft_putnbr(nbr / limit, limit, base);
		i += write(1, &base[(unsigned int)nbr % limit], 1);
	}
	if (nbr < limit)
		i += write(1, &base[nbr], 1);
	return (i);
}
