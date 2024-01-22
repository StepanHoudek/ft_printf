/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:42:47 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/18 17:09:23 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
		//• %c Prints a single character.
		//• %s Prints a string (as defined by the common C convention).
		//• %% Prints a percent sign.
		//• %d Prints a decimal (base 10) number.
		//• %i Prints an integer in base 10.
• %p The void * pointer argument has to be printed in hexadecimal format.
		//• %u Prints an unsigned decimal (base 10) number.
		//• %x Prints a number in hexadecimal (base 16) lowercase format.
		//• %X Prints a number in hexadecimal (base 16) uppercase format.
		
*/

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		sum;
	int		*ptr_sum;

	sum = 0;
	ptr_sum = &sum;
	va_start(args, format);
	ft_format(format, ptr_sum, args);
	return (sum);
}
