/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:13:53 by ajumbo            #+#    #+#             */
/*   Updated: 2021/11/02 15:36:06 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long long	address;
	int					i;
	
	address = (unsigned long long)ptr;
	i = 0;
	i += write(1, "0x", 2);
	return (ft_putnbr(address, 16, "0123456789abcdef") + i);
}
