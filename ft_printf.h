/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:03:21 by ajumbo            #+#    #+#             */
/*   Updated: 2021/11/02 16:03:13 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *s, ...);
int	ft_switcher(char c, va_list ap);
int	ft_putstr(char *str);
int	ft_putchr(int c);
int	ft_putptr(void *ptr);
int	ft_putdec(int nbt);
int	ft_putnbr(unsigned long long nbr, unsigned int limit, char *base);

#endif
