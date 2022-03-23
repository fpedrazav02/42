/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:14:44 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/22 21:24:01 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}

int	ft_toupper(int x)
{
	if (ft_islower(x))
		x -= 32;
	return (x);
}
// int main ()
// {
//     char letra;

//     letra = 'a';
//     printf("%c\n", ft_toupper(letra));
//     return (0);
// }