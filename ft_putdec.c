/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:49:17 by ajumbo            #+#    #+#             */
/*   Updated: 2021/11/03 10:42:45 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdec(int nbr)
{
	int		i;
	long	n;

	i = 0;
	n = (long)nbr;
	if (n < 0)
	{
		i += write(1, "-", 1);
		n *= -1;
	}
	return (ft_putnbr((unsigned long long)n, "0123456789") + i);
}
