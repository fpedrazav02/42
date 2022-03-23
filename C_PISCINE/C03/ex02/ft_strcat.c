#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
  while(*dest)
    dest++;
  while(*src)
    *dest++ = *src++;
  *dest = '\0';
  return(dest);
}
int main ()
{
  char src[]="aaa";
  char dest[50]="bb";
  ft_strcat(dest, src);
  printf("%s", dest);
  return(0);
}