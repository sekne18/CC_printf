/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsekne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:55:22 by jsekne            #+#    #+#             */
/*   Updated: 2024/10/09 16:04:59 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		counter;

	counter = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
			print_argument(++s, args, &counter);
		else
		{
			counter++;
			write(1, s, 1);
		}
		s++;
	}
	return (counter);
}

void	print_argument(const char *s, va_list args, int *counter)
{
	if (*s == 's')
		ft_putstr((char *)va_arg(args, char *), counter);
	else if (*s == 'i' || *s == 'd')
		ft_putnbr(va_arg(args, int), counter);
	else if (*s == 'c')
	{
		(*counter)++;
		ft_putchar((char)va_arg(args, int));
	}
	else if (*s == 'u')
		ft_putudec((unsigned int)va_arg(args, unsigned int), counter);
	else if (*s == 'p')
		ft_putvoid((void *)va_arg(args, void *), counter);
	else if (*s == 'X' || *s == 'x')
		ft_puthex(*s, va_arg(args, int), counter);
	else if (*s != 0)
	{
		(*counter)++;
		ft_putchar(*s);
	}
}
