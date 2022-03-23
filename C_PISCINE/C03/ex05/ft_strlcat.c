#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
  {  i++;
    str++;
  }
  return(i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
  int i;
  unsigned int l_dest;
  unsigned int l_src;
  i = 0;
  l_dest = ft_strlen(dest);
  l_src = ft_strlen(src);

  if(size == 0 || size<= l_dest)
    return(l_src + size);
  while(*dest)
    dest++;
  while(*src && i < size - l_dest - 1)
  {
    *dest++ = *src++;
    i++;
  }
  *dest = '\0';
  return(l_dest + l_src);
}
int main ()
{
  char src[]="CARACOLA";
  char dest[50]="HOLA";
  ft_strlcat(dest, src, 7);
  printf("%s\n", dest);
  printf("%i\n", ft_strlcat(dest, src, 7));
  return(0);
}