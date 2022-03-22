#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}



int main () {
   const char str[] = "http://www.tutorialspoint.com";
   
   ft_strchr(str, '.');

   printf("%s",ft_strchr(str, '.'));
   
   return(0);
}