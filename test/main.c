/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:12:06 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/23 14:30:18 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <limits.h>

/*
	• %c Prints a single character.
	• %s Prints a string (as defined by the common C convention).
	• %% Prints a percent sign.
	• %d Prints a decimal (base 10) number.
	• %i Prints an integer in base 10.
	• %p The void * pointer argument has to be printed in hexadecimal format.
	• %u Prints an unsigned decimal (base 10) number.
	• %x Prints a number in hexadecimal (base 16) lowercase format.
	• %X Prints a number in hexadecimal (base 16) uppercase format.
*/

int	main(void)
{
	ft_printf("%c\n", 'c');
	ft_printf("%s\n", "string");
	ft_printf("%s\n", NULL);
	ft_printf("%%\n");
	ft_printf("%d\n", INT_MAX);
	ft_printf("%d\n", INT_MAX);
	ft_printf("%u\n", -200);
	ft_printf(" %p %x %X \n", LONG_MIN, INT_MAX, INT_MAX);
}
