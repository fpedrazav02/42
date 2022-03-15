#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_str_is_printable(char *str)
{
  while(*str != '\0')
  {  
    if(*str < ' ' || *str > 126)
      return(0);
    str++;
  }  
  return(1);
}

int main ()
{
  printf("%i\n", ft_str_is_printable("  aaaa"));
  return (0);
}