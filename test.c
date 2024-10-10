/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsekne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 07:55:01 by jsekne            #+#    #+#             */
/*   Updated: 2024/10/10 14:41:32 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int num = 19;
	int dec_to_hex = 2147483645;
	unsigned int d = 4294967295;

	//Test for c, s, i
	printf("Original (%%s, %%i, %%c): This is %s %i%c\n", "Campus", num, '!');
	ft_printf("ftprintf (%%s, %%i, %%c): This is %s %i%c\n", "Campus", num, '!');

	//Length test
	printf("Return value of Original: %d | ft: %d\n\n",
	printf(" (%%s, %%i, %%c): This is %s %i%c\n", "Campus", num, '!'),
	ft_printf(" (%%s, %%i, %%c): This is %s %i%c\n", "Campus", num, '!'));

	//Test for p
	printf("Original pointer: %p\n", &dec_to_hex);
	ft_printf("ftprintf pointer: %p\n", &dec_to_hex);
	printf("Orig: NULL %s NULL\n", (char *)0);
	ft_printf("ftpr: NULL %s NULL\n", NULL);
	
	printf("\nReturn value of Original: %d | ft: %d\n\n",
	printf(" NULL %s NULL ", (char *)NULL),
	ft_printf(" NULL %s NULL ", NULL));

	//Length test
	printf("\nReturn value of Original: %d | ft: %d\n\n", printf("pointer: %p\n", &dec_to_hex),
	ft_printf("pointer: %p\n", &dec_to_hex));
	
	//Test for x
//	printf("Original Hex (lowercase): %x\n", dec_to_hex);
//	ft_printf("ftprintf Hex (lowercase): %x\n", dec_to_hex);
	
	//Length test
	printf(" %x \n", -1);
	ft_printf(" %x \n", -1);
	

	//Test for X
	printf("Original Hex (lowercase): %X\n", dec_to_hex);
	ft_printf("ftprintf Hex (uppercase): %X\n\n", dec_to_hex);
	
	//Test for u
	printf("Original unsigned decimal: %u\n", d);
	ft_printf("ftprintf unsigned decimal: %u\n\n", d);
	
	//Test for d
	printf("Original decimal: %d\n", dec_to_hex);
	ft_printf("ftprintf decimal: %d\n\n", dec_to_hex);
	
	//Test for %
	printf("Original %%\n");
	ft_printf("ftprintf %%\n\n");
	
	printf("Original : ");
	printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	ft_printf("ft_printf: ");
	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);

	//NULL pointer
	printf(" %p %p ", (void *)0, (void *)0);
	ft_printf(" %p %p ", (void *)0, (void *)0);

	//Test for text only
	printf("Original random \ntest 19 19\n");
	ft_printf("ftprintf random\ntest 19 19\n");
	return (0);
}
