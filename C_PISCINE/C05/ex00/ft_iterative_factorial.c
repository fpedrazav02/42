#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_iterative_factorial(int nb)
{
  int n; 

  n = 1;
  if (nb <= 1)
    return(1);
  if(nb < 0)
    return(0);
  while(nb > 0)
  {
    n *= nb--; 
  }
  return(n);
}

int main ()
{
  printf("%i\n", ft_iterative_factorial(5));
  return(0);
}