#include<stdio.h>

int
	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(s1 + i) != *(unsigned char*)(s2 + i))
			return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
		i++;
	}
	return (0);
}

int main ()
{
  char buffer1[] = "aaa";
  char buffer2[] = "aab";
  printf ("%i\n",ft_memcmp(buffer1,buffer2, 4));
}