#include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	while(i >= 0)
	{
		if (str[i]== (char)c)
			return ((char*)(str + i));
		i--;
	}
	return (NULL);
}

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   
   ft_strrchr(str, '.');

   printf("%s",ft_strrchr(str, '.'));
   
   return(0);
}