/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:12:06 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/22 11:12:06 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
	//ft_printf(" NULL %s NULL ", NULL);
	int 		sig_int = -222;
	unsigned	unsig_int  = -222;
	ft_printf("%u", unsig_int);
	//ft_printf("%d", 222);
}
