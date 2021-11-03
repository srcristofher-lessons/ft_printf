/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:56:22 by ajumbo            #+#    #+#             */
/*   Updated: 2021/11/03 10:43:18 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nbr, char c)
{
	int	i;

	i = 0;
	if (c == 'x')
		i += ft_putnbr((unsigned long long)nbr, "0123456789abcdef");
	else if (c == 'X')
		i += ft_putnbr((unsigned long long)nbr, "0123456789ABCDEF");
	return (i);
}
