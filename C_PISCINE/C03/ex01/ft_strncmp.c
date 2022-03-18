#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>


int ft_strcmp(char *s1, char *s2, unsigned int n)
{
  while(n)
  { 
    if(*s1 > *s2 || *s2 > *s1)
      return(*s1 - *s2);
    s1++;
    s2++;
    n--;
  }
  return  (*s1 - *s2);
}

int main ()
{
  char s1[]="aaa";
  char s2[]="abc";
  printf("%i", ft_strcmp(s1, s2, 1));
  return(0);
}