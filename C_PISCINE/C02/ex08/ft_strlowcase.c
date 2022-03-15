#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

char  *ft_strlowcase(char *str)
{
  while(*str)
  {  
    if(*str >= 'A' && *str <= 'Z')
      *str += 32;
    str++;
  }  
  return(str);
}

int main ()
{
  char arr[]="ASDBASD";
 ft_strlowcase(arr);
  printf("%s\n", arr);
  return (0);
}