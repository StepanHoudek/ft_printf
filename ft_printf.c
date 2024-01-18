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
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
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
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar(*format++, ptr_sum);
			continue ;
		}
		if (*(format + 1) == '%' && *format == '%')
			ft_putchar('%', ptr_sum);
		if (*(format + 1) == 'c')
			ft_putchar(va_arg(args, int), ptr_sum);
		if (*(format + 1) == 's')
			ft_putstr(va_arg(args, char *), ptr_sum);
		if (*(format + 1) == 'd' || *(format + 1) == 'i')
			ft_putnbr(va_arg(args, int), ptr_sum);
		format = format + 2;
	}
	return (sum);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*format;
	char	*s2;

	// format= "sss%cd%s\n";
	// format = "s%c%%%s\n%d\n%%\n";
	// printf(format, 'c', "ahoj", 1);
	// ft_printf(format, 'c', "ahoj", 1);
	// format = "%%%s%%s\n";
	// printf(format, "ahoj");
	// printf("%d",ft_printf(format, "ahoj"));


	//  s2 = "Mussum Ipsum,	cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	// format = " %s";
	// printf(format, "");
	// ft_printf(format, "");


	//format = " NULL %s NULL ";
	//printf(format, NULL);
	ft_printf(" NULL %s NULL ", NULL);
}
*/

