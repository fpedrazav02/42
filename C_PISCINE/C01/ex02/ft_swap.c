#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void ft_swap(int *a, int *b)
{
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}
int main ()
{
  int x = 5;
  int y = 12;

  int *ptx = &x;
  int *pty = &y;
  ft_swap(ptx, pty);
  printf("%i\n %i\n", x, y);
  return (0);
}