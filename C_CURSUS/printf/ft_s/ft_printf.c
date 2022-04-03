/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:23:30 by fpedraza          #+#    #+#             */
/*   Updated: 2022/04/03 09:23:30 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"printf.h"

int	ft_format(va_list list, const char format)
{
	int	plen;

	plen = 0;
	if (format == 'c')
		plen += ft_printchar(va_arg(list, int));
	else if (format == 's')
		plen += ft_printstr(va_arg(list, char *));
	else if (format == 'd' || format == 'i')
		plen += ft_printnbr(va_arg(list, int));
	else if (format == 'u')
		plen += ft_printunbr(va_arg(list, unsigned int));
	else if (format == '%')
		plen += ft_printpercent();
	else if (format == 'p')
		plen += ft_printp(va_arg(list, unsigned long));
	else if (format == 'x' || format == 'X')
		plen += ft_hex(va_arg(list, unsigned int), format);
	return (plen);
}

int ft_printf(const *str, ...)
{
	int i;
	int flen;
	va_list lists;
	va_start(list, str);

	i = 0;
	flen = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			flen = flen + ft_format(str[i + i]);
			i++;
        }
        else
            flen = flen + ft_psrintchar(str[i]);
        i++;
    }
	return (flen);
}
