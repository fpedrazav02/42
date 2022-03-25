/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:45:40 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/25 09:45:33 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// char	*ft_strchr(const char *str, int c)
// {
// 	int	i;

// 	i = 0;
// 	if (!str)
// 		return (NULL);
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == (char)c)
// 			return ((char *)(str + i));
// 		i++;
// 	}
// 	return (NULL);
// }
char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != c)
		str++;
	if (*str == c)
		return ((char *)(str));
	return (0);
}
// if (!str)
// 		return (0);
// int main () {
//    const char str[] = "http://www.tutorialspoint.com";
//    ft_strchr(str, '.');

//    printf("%s",ft_strchr(str, '.'));
//    return(0);
// }