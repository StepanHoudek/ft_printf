/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:33:26 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/18 15:36:20 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsnbr(unsigned int n, int *ptr_sum)
{
	unsigned long int	num;

	num = n;
	if (num > 9)
	{
		ft_putnbr(num / 10, ptr_sum);
		ft_putnbr(num % 10, ptr_sum);
	}
	else
		ft_putchar(num % 10 + '0', ptr_sum);
}

/*
int	main(void)
{
	int	*ptr_sum;
	int sum = 0;
	ptr_sum = &sum;
	ft_putunsnbr(-200, ptr_sum);
}
*/
