#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  while(n && *src != '\0')
  {
    *dest++ = *src++;
    n--;
  }
  *dest = '\0';
}

int main ()
{
  char src[]="HOLA";
  char dest[20]= "CARACOLA";
  ft_strncpy(dest,src, 5);
  printf("%s", dest);
  return (0);
}