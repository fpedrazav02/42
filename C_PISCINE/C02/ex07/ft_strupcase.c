#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

char  *ft_strupcase(char *str)
{
  while(*str)
  {  
    if(*str >= 'a' && *str <= 'z')
      *str -= 32;
    str++;
  }  
  return(str);
}

int main ()
{
  char arr[]="aaaa";
 ft_strupcase(arr);
  printf("%s\n", arr);
  return (0);
}