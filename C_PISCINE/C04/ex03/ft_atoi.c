#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_atoi(char *str)
{
  int i;
  int sign;
  int nb;

  i = 0;
  sign = 1;
  nb = 0;
  while(*str <= ' ')
    str++;
  while(*str == '+' ||*str == '-')
  {
    if(*str == '-')
      sign *= -1;
    str++;
  }
  while(*str >= '0' && *str<= '9')
  {
    nb = nb * 10 + (*str - '0');
    str++;
  }
  return(nb * sign);
}

int main ()
{
  printf("%i", ft_atoi(" ---+--+12342342ab567"));
  return(0);
}