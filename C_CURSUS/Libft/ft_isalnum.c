/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:35:00 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/22 20:37:24 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(char c) || (c >= 48 && c <= 59));
}

// int main ()
// {
//     char letra;

//     letra = '9';
//     printf("%i\n", ft_isalnum(letra));
//     return (0);
// }