#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_str_is_uppercase(char *str)
{
  while(*str != '\0')
  {  
    if(*str < 'A' || *str > 'Z')
      return(0);
    str++;
  }  
  return(1);
}

int main ()
{
  printf("%i\n", ft_str_is_uppercase("ASDF"));
  return (0);
}