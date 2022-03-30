/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:02:55 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/30 02:57:48 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(char *str, char *to_find, unsigned int len)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
		i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && to_find[j]
			&& i + j < len && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}

// char
// 	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	if (!haystack || !needle)
// 		return (NULL);
// 	if (!needle || !needle[0])
// 		return ((char*)haystack);
// 	i = 0;
// 	while (haystack[i] && i < len)
// 	{
// 		j = 0;
// 			j++;
// 		if (!needle[j])
// 			return ((char*)(haystack + i));
// 		i++;
// 	}
// 	return (NULL);
// }
// int main ()
// {
//   char str[]= "HOLACARACOLA";
//   char to_find[]= "CARACOLA";
//   printf("%s\n", ft_strnstr(str, to_find, 6));

//   return(0);
// }