#include<stdio.h>

void	ft_bzero(void *s, size_t n)
{
	int i;

	i = 0;
	while(n--)
		((unsigned char*)s)[i++] = '\0';
}

int main ()
{
	char str[]="HOLASSSSS";
	ft_bzero(str, 4);
	printf("%s",str);

	return (0);
}