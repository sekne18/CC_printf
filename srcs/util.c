/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsekne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 07:20:20 by jsekne            #+#    #+#             */
/*   Updated: 2024/10/09 16:04:24 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *str, int *counter)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		(*counter)++;
		ft_putchar(str[i]);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, int *counter)
{
	char	res[12];
	int		i;
	int		is_neg;

	i = 0;
	is_neg = 0;
	if (nb == 0)
		res[i++] = '0';
	if (nb < 0)
		is_neg = 1;
	while (nb != 0)
	{
		if (is_neg)
			res[i++] = ((nb % 10) * -1) + '0';
		else
			res[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (is_neg)
		res[i++] = '-';
	while (i > 0)
	{	
		(*counter)++;
		write(1, &res[--i], 1);
	}
}

void	ft_putudec(unsigned int nb, int *counter)
{	
	char	res[11];
	int		i;
	int		is_neg;

	i = 0;
	is_neg = 0;
	if (nb == 0)
		res[i++] = '0';
	if (nb < 0)
		is_neg = 1;
	while (nb != 0)
	{
		if (is_neg)
			res[i++] = ((nb % 10) * -1) + '0';
		else
			res[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (is_neg)
		res[i++] = '-';
	while (i > 0)
	{	
		(*counter)++;
		write(1, &res[--i], 1);
	}
}
