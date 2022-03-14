#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void ft_putstr(char *str)
{
  while(*str)
    write(1, str++, 1);
}
int main ()
{
  ft_putstr("supercalifragilísticoespialidoso");
  return (0);
}