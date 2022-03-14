#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(*str++)
		i++;
	return(i);	

}

int main ()
{
  printf("%d\n",ft_strlen("supercalifragilisticoespialidoso"));
  return (0);
}