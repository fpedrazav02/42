#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>


void ft_ultimate_div_mod(int *a, int *b)
{
  int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main ()
{
  int a;
	int b;

	a = 15;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%i\n%i\n", a, b);

  return (0);
}