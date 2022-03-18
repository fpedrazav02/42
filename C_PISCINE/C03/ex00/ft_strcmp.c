#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>


int ft_strcmp(char *s1, char *s2)
{
  while(*s1 && *s2)
  { 
    if(*s1 > *s2 || *s2 > *s1)
      return(*s1 - *s2);
    s1++;
    s2++;
  }
  return  (*s1 - *s2);
}

int main ()
{
  char s1[]="xab";
  char s2[]="aaa";
  printf("%i", ft_strcmp(s1, s2));
  return(0);
}