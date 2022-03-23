#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void  ft_putchar(int c)
{
  char z;
  z = c + '0';
  write(1, &z, 1);
}

void  ft_putnbr(int nb)
{
  if(nb == -2147483648)
    write(1, "-2147483648", 11);
  else if(nb > 9)
  {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
  else if (nb < 0)
  {
      nb *= -1;   //--> igual que nb = nb * -1;
      write(1, "-", 1);
      ft_putnbr(nb);
  }
  else
  {
    ft_putchar(nb);
  } 
}
int main ()
{
  ft_putnbr(-23423);
  return(0);
}