#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
  while(*src != '\0')
  {
    *dest++ = *src++;
  }
  *dest = '\0';
}

int main ()
{
  char src[]="HOLA";
  char dest[20]= "CARACOLA";
  ft_strcpy(dest,src);
  printf("%s", dest);
  return (0);
}