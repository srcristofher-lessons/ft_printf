/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:36:51 by ajumbo            #+#    #+#             */
/*   Updated: 2021/11/02 16:04:13 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		n;
	int		n2;

	va_start(ap, s);
	i = -1;
	n = 0;
	n2 = 0;
	while (s[++i])
	{
		if (s[i] == '%')
			n2 += ft_switcher(s[++i], ap);
		else
			n += (int)write(1, &s[i], 1);
	}
	va_end(ap);
	return (n + n2);
}

//int main (void)
//{
//	printf("%d\n", printf("%p\n", (void *)-1));
//	printf("%d\n", ft_printf("%p\n", (void *)-1));
//	return (0);
//}
