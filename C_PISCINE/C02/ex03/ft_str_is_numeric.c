#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_str_is_numeric(char *str)
{
  while(*str != '\0')
  {  
    if(*str < '0' || *str > '9')
      return(0);
    str++;
  }  
  return(1);
}

int main ()
{
  printf("%i\n", ft_str_is_numeric("12323a42423"));
  return (0);
}