#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_recursive_power(int nb, int power)
{
  if(power < 0)
    return(0);
  if(power == 0)
    return(1);
  
  return(nb * ft_recursive_power(nb, power -1));
}

int main ()
{
  printf("%i\n", ft_recursive_power(2, 4));
  return(0);
}