#include<stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int i;

	i = 0;
	while(i < n)
	{
		*(unsigned char*)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}

int main ()
{
	char str[]="HOLASSSSS";
	printf("%s",ft_memset(str, '$', 4));

	return (0);
}