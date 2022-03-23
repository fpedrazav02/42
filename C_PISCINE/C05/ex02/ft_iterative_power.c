#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_iterative_power(int nb, int power)
{
  int n;
  
  n = nb;
  if(power < 0)
    return(0);
  if(power == 0)
    return(1);
  while (power > 1)
  {
    n = n * nb;
    power--;
  }
  return (n);
}
int main ()
{
  printf("%i\n", ft_iterative_power(2, 4));
  return(0);
}