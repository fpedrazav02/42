/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:43:09 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/22 20:43:09 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	while (num--)
	{
		*(unsigned char *)destination++ = *(unsigned char *)source++;
	}
	return (destination);
}

// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstring";

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 2);
//    printf("After memmove dest = %s, src = %s\n", dest, src);
//    return(0);
// }