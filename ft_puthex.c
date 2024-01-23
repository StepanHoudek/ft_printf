/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:27:16 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/23 14:23:12 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(uintptr_t num, const char *format, int *ptr_sum)
{
	char	*hex;

	if (*(format + 1) != 'p')
		num = (unsigned int)num;
	if (*(format + 1) == 'X')
		hex = "ABCDEF";
	else
		hex = "abcdef";
	if (num < 16)
	{
		if (num < 10)
			ft_putnbr(num, ptr_sum);
		else
			ft_putchar(hex[num - 10], ptr_sum);
	}
	else
	{
		ft_puthex(num / 16, format, ptr_sum);
		ft_puthex(num - ((num / 16) * 16), format, ptr_sum);
	}
}

/*
#include <limits.h>
int	main(void)
{
	int			*ptr_sum;
	int			sum;
	const char	*format = "%x";
	intptr_t	max;

	sum = 0;
	ptr_sum = &sum;
	max = 2147483650;
	ft_puthex(LONG_MIN, "%p", ptr_sum);
	printf("\n");
	printf("%p", LONG_MIN);
	//float	remainder = ((501 % 16) / (float)16) * 16;
	//printf("%f", remainder);
}
*/
