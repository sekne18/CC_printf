/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsekne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:26:18 by jsekne            #+#    #+#             */
/*   Updated: 2024/10/09 16:28:03 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *s, ...);
void	ft_putnbr(int nb, int *counter);
void	ft_putstr(char *str, int *counter);
void	ft_putchar(char c);
void	ft_putvoid(void *p, int *counter);
void	ft_puthex(char c, int n, int *counter);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_putudec(unsigned int nb, int *counter);
void	get_base(char c, char *base);
void	print_argument(const char *s, va_list args, int *counter);
#endif
