#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void ft_ft(int *nbr)
{
  *nbr = 42;
}
int main ()
{
  int x = 5;
  int *ptr;
  ptr = &x;
  
  ft_ft(ptr);
  printf("%i", x);
  return (0);
}