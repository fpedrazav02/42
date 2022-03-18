#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_sqrt(int nb)
{
  int i;

  i = 2;
  if (nb < 0)
    return(0);
  while(i <= nb/2)
  {
    if(i * i == nb)
      return(i);
    i++;
  }
  return(0);
}

int main ()
{
  printf("%i\n", ft_sqrt(2342342));
  return(0);
}