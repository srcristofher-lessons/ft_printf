/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:03:21 by ajumbo            #+#    #+#             */
/*   Updated: 2021/11/03 10:42:07 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *s, ...);
int	ft_switcher(char c, va_list ap);
int	ft_putstr(char *str);
int	ft_putchr(int c);
int	ft_putptr(void *ptr);
int	ft_putdec(int nbr);
int	ft_putuns(unsigned int nbr);
int	ft_puthex(unsigned int nbr, char c);
int	ft_putnbr(unsigned long long nbr, char *base);

#endif
