#include<stdio.h>
void	*ft_memcpy(void *dest, void *src, size_t n)
{
	int i;

	i = 0;
	while(n--)
	{
		*(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
		i++;
	}
	return (dest);
}

int main ()
{
	char dest[]="HOLASSSSS";
	char src[]="kkkkkkk";
	printf("%s\n",ft_memcpy(dest, src, 4));
	printf("%s", dest);

	return (0);
}