/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:06:01 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/24 15:06:11 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int	ft_atoi(const char *nptr);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nitems, size_t size);

int	ft_isalnum(int c);

int	ft_isalpha(int c);

int	ft_isascii(int c);

int	ft_isdigit(int c);

void	*ft_memchr(const void *str, int c, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *dest, void *src, size_t n);

void	*ft_memmove(void *destination, const void *source, size_t num);

void	*ft_memset(void *s, int c, size_t n);

char	*ft_strchr(const char *str, int c);

char	*ft_strdup(const char *s);

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlen(char *str);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(char *str, char *to_find, int len);

char	*ft_strrchr(const char *str, int c);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	ft_tolower(int x);

int	ft_toupper(int x);
#endif /*....LIBFT_H*/
