/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:12:04 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/22 21:12:47 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}

int	ft_tolower(int x)
{
	if (ft_isupper(x))
		x += 32;
	return (x);
}
// int main ()
// {
//     char letra;

//     letra = 'B';
//     printf("%c\n", ft_tolower(letra));
//     return (0);
// }