/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:27:16 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/22 11:27:16 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(int n, const char *format, int *ptr_sum)
{
	char		*hex;
	long int	num;
	
	num = n;
	if (*(format + 1) == 'X')
		hex = "ABCDEF";
	else
		hex = "abcdef";
	if (num < 0)
	{
		ft_putchar ('-', ptr_sum);
		num *= -1;
	}
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
int	main(void)
{
	int	*ptr_sum;
	int	sum = 0;
	ptr_sum = &sum;
	const char	*format = "%x";
	ft_puthex(222, format, ptr_sum);
	
	float	remainder = ((501 % 16) / (float)16) * 16;
	
	
	//printf("%f", remainder);
}
*/
