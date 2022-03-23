#ifndef libft
#define libft

#include <unistd.h>
#include <stdlib.h>

int	atoi(const char *nptr);

void	bzero(void *s, size_t n);

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	ft_strlcpy(char *dest, char *src, int size);

size_t	ft_strlen(char *str);

int	ft_strncmp(char *s1, char *s2, int n);

char	*ft_strnstr(char *str, char *to_find, int len);

char	*ft_strrchr(const char *str, int c);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	ft_tolower(int x);

int	ft_toupper(int x);


#endif
