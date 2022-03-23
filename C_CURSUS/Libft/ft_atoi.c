/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:50:17 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/22 20:30:42 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>
// #include<stdio.h>
// #include<stdlib.h>
#include"libft.h"

int atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (nptr[i] <= ' ')
		i++;
	if (nptr[i] == '-' && (nptr[i + 1] >= '0' && nptr[i + 1] <= '9'))
	{
		sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	return (nb * sign);
}

// int main ()
// {
//   printf("%i\n", ft_atoi(" 12342342ab567"));
//   printf("%i\n", atoi(" 12342342ab567"));
//   return(0);
// }