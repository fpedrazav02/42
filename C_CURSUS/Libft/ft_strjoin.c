/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:48:23 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/24 15:23:17 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
// size_t ft_strlen (const char *str)
// {
//     int	i;

// 	i = 0;
//     while (*str++)
//         i++;
//     return (i);
// }
char	*ft_strjoin(char *ft_strjoin(char const *s1, char const *s2))
{
	char	*join;
	int		total_l;
	int		i;
	int		j;

	i = 0;
	j = 0;
	total_l = ft_strlen((const char*) s1) + ft_strlen((const char*) s2);
	if (!(join = malloc(sizeof(char) * total_l + 1)))
		return (NULL);	
	while (s1[i])
	{
		join[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		join[j++] = s2[i++];
	}
	join[j] = 0;
	return (join);
}
// int main ()
// {
// 	char s1[]="hola";
// 	char s2[]="caracola";
// 	int total_l;

// 	total_l = ft_strlen(s1) + ft_strlen(s2);
// 	printf("%s\n", ft_strjoin(s1,s2));
// 	printf("%i\n", total_l);
// 	return (0);
// }