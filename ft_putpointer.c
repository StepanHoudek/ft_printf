/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:10:25 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/23 10:10:25 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer(void *ptr, int *ptr_sum)
{
	intptr_t intptr;
	char *format;
	
	format = "%x";
	intptr = (intptr_t)ptr;
	ft_puthex(intptr, format, ptr_sum);
}

int	main(void)
{
	int	sum = 0;
	int	*ptr_sum = &sum;
	ft_putpointer(ptr_sum, ptr_sum);
	printf("\n%p", ptr_sum);
}
