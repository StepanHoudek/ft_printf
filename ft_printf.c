/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:42:47 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/18 13:54:37 by shoudek          ###   ########.fr       */
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

#include "libftprintf.h"

const char	*ft_handle_percent(const char *format)
{
	while (*format == '%' && *(format + 1) == '%')
	{
		if (*(format + 1) == '%' && *format == '%')
		{
			ft_putchar_fd('%', 1);
			format = format + 2;
		}
	}
	return (format);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		format = ft_handle_percent(format);
		while (*format != '%' && *format)
			ft_putchar_fd((format++)[0], 1);
		if (*(format + 1) == 'c')
			ft_putchar_fd(va_arg(args, int), 1);
		if (*(format + 1) == 's')
			ft_putstr_fd(va_arg(args, char *), 1);
		if (*(format + 1) == 'd')
			ft_putnbr_fd(va_arg(args, int), 1);
		if (*format)
			format = format + 2;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*format;

	// format= "sss%cd%s\n";
	format = "s%c%%%s\n%d\n%%";
	//printf(format, 'c', "ahoj", 1);
	ft_printf(format, 'c', "ahoj", 1);
	// format = "%%%s%%s\n";
	// printf(format, "ahoj");
	// ft_printf(format, "ahoj");
}
