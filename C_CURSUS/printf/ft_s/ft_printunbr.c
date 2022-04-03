/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:35:12 by fpedraza          #+#    #+#             */
/*   Updated: 2022/04/03 09:35:12 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"printf.h"

static int	ft_nbrlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_uitoa(unsigned int nbr)
{
	int		len;
	char	*num;

	len = ft_nbrlen(nbr);
	num = (char *)malloc(sizeof(char) * len + 1);
	num[len] = '\0';
	while (nbr != 0)
	{
		num[len - 1] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (num);
}

int	ft_printunbr(unsigned int nbr)
{
	int		len;
	char	*num;

	len = 0;
	if (nbr == 0)
		len += write(1, "0", 1);
	else
	{
		nbr = ft_uitoa(nbr);
		len += ft_printstr(num);
		free(num);
	}
	return (len);
}