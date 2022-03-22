#include<stdio.h>
#include<stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	int i;

	i = 0;
	while(n--)
		((unsigned char*)s)[i++] = '0';
}

void *ft_calloc(size_t nitems, size_t size)
{
	void *ptr;

	if(!(ptr = malloc(nitems * size)))
		return (NULL);
	ft_bzero(ptr, nitems);
	return (ptr);
}

int main ()
{
	printf("%s", ft_calloc(4,1));
	return (0);
}