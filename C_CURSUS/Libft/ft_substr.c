/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:09:52 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/22 21:10:54 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*ns;

	i = 0;
	if (!(ns = malloc(sizeof(char) * len)))
		return (NULL);
	while (i < len)
	{
		ns[i++] = s[start++];
	}
	return (ns);
}

// int main ()
// {
// 	char s[]="holacaracola";
// 	printf("%s", ft_substr(s, 4, 8));
// 	return (0);
// }