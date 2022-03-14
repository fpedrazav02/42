#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a/b;
  *mod = a % b;
}
int main ()
{
  int a = 15;
  int b = 3;

  int div;
  int mod;

  int *ptdiv = &div;
  int *ptmod = &mod;
  ft_div_mod(a, b, ptdiv, ptmod);
  printf("%i\n%i\n", div, mod);
  return (0);
}