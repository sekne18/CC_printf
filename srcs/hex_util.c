/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsekne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:18:38 by jsekne            #+#    #+#             */
/*   Updated: 2024/10/09 16:32:20 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthex(char c, int n, int *counter)
{
	int		i;
	int		temp[14];
	char	base[16];

	get_base(c, base);
	i = 0;
	if (n == 0)
		write(1, &base[0], 1);
	if (n < 0)
		write(1, "-", 1);
	while (n)
	{
		if (n < 0)
			temp[i++] = (n % 16) * -1;
		else
			temp[i++] = n % 16;
		n /= 16;
	}
	while (i > 0)
	{
		(*counter)++;
		write(1, &base[temp[--i]], 1);
	}
}

void	get_base(char c, char *base)
{
	if (c == 'x')
		ft_memcpy(base, "0123456789abcdef", 16);
	else
		ft_memcpy(base, "0123456789ABCDEF", 16);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (*s && n-- > 0)
		*d++ = *s++;
	*d = '\0';
	return (dest);
}

void	ft_putvoid(void *p, int *counter)
{
	unsigned long long	n;
	uintptr_t			converted;
	int					i;
	int					temp[16];
	char				base[16];

	converted = (uintptr_t) p;
	n = converted;
	ft_memcpy(base, "0123456789abcdef", 16);
	i = 0;
	if (n == 0)
		write(1, &base[0], 1);
	while (n)
	{
		temp[i++] = n % 16;
		n /= 16;
	}
	ft_putstr("0x", counter);
	while (--i >= 0)
	{
		(*counter)++;
		ft_putchar(base[temp[i]]);
	}
}
