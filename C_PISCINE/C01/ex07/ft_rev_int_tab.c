#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void ft_rev_int_tab(int *tab, int size)
{
  int aux;
  int i;
  int end;

  i = 0;
  end = size - 1;
  while(i < (size / 2))
  {
    aux = tab[i];
    tab[i] = tab[end];
    tab[end] = aux;
    end--;
    i++;
  }
}
int main ()
{
  int tab[]={1,2,3,4,5,6};
  ft_rev_int_tab(tab, 6);
  printf("%i\n%i\n%i\n", tab[0], tab[1],tab[2] );
  return (0);
}