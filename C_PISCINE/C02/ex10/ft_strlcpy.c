#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while(*str++)
    i++;
  return(i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
  int i;
  unsigned int src_l;

  src_l=(ft_strlen(src));
  i = 0;
  while(*src && i < size - 1)
  {
    *dest++ = *src++;
    i++;
  }
  *dest = '\0';
  return(src_l);
}

int main ()
{
  char src[]="HOLA";
  char dest[20]="caracola";
  ft_strlcpy(dest, src, 4);
  printf("%s\n", dest);
  return (0);
}