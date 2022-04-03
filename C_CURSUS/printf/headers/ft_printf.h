/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:19:15 by fpedraza          #+#    #+#             */
/*   Updated: 2022/04/03 10:19:15 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_hex(unsigned int nbr, const char format);

int	ft_printchar(char c);

int ft_printf(const *str, ...);

int	ft_printnbr(int n);

int	ft_printp(unsigned long ptr);

int	ft_printpercent(void);

int	ft_printstr(char *str);

int	ft_printunbr(unsigned int nbr);
#endif /*....ft_PRINTF_H*/