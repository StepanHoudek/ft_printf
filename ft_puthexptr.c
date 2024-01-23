/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:27:16 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/23 13:45:17 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexptr(uintptr_t num, const char *format, int *ptr_sum)
{
	char	*hex;

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
		ft_puthexptr(num / 16, format, ptr_sum);
		ft_puthexptr(num - ((num / 16) * 16), format, ptr_sum);
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
	ft_puthexptr(LONG_MIN, format, ptr_sum);
	//printf("\n%x", max);
	//float	remainder = ((501 % 16) / (float)16) * 16;
	//printf("%f", remainder);
}
*/
