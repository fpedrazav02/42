/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:30:59 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/22 20:32:23 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
#include"libft.h"

void	bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n--)
		((unsigned char *)s)[i++] = '\0';
}

// int main ()
// {
// 	char str[]="HOLASSSSS";
// 	ft_bzero(str, 4);
// 	printf("%s",str);

// 	return (0);
// }