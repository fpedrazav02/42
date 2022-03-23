#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
  while(*dest)
    dest++;
  while(nb)
  {
   if (*src)
   {
     *dest++ = *src++;
   }
   else
    *dest++ = '\0'; 
    nb--;
  }
  return(dest);
}
int main ()
{
  char src[]="aaa";
  char dest[50]="bb";
  ft_strncat(dest, src,1);
  printf("%s", dest);
  return(0);
}