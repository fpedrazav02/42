/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:42:46 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/25 10:58:00 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if ((dest == '\0' && src == '\0') || !n)
		return (dest);
	while (n--)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/* Necessary statement */
// int main ()
// {
// 	char dest[]="HOLASSSSS";
// 	char src[]="kkkkkkk";
// 	printf("%s\n",ft_memcpy(dest, src, 4));
// 	printf("%s", dest);

// 	return (0);
// }