#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>


void ft_sort_int_tab(int *tab, int size)
{
  int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		while (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}

int main ()
{
  int tab[]={6,6,5,4,3,2};
  ft_sort_int_tab(tab, 6);
  printf("%i\n%i\n%i\n%i\n%i\n", tab[0], tab[1],tab[2],tab[3],tab[4] );
  return (0);
}