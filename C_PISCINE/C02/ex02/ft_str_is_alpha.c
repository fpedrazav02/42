#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_str_is_alpha(char *str)
{
  while(*str != '\0')
  {  
    if((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
      return(0);
    str++;
  }  
  return(1);
}

int main ()
{
  printf("%i\n", ft_str_is_alpha("Asdafdfsd"));
  return (0);
}