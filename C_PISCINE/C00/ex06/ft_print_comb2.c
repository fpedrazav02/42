#include <unistd.h>

void  ft_putchar(int c)
{
  char z;
  z = c + '0';
  write(1, &z, 1);
}
void  ft_display(int n)
{
  if(n > 9)
  {
    ft_putchar(n / 10);
    ft_putchar(n % 10);
  }
  else
  {
     write(1, "0", 1);
    ft_putchar(n);
  }
}

void  ft_print_comb(void)
{
  int i;
  int j;

  i = 0;
  while(i <= 98)
  {
    j = 0;
    while(j <= 99)
    {
      ft_display(i);
      write(1, " ", 1);
      ft_display(j);
      if(!(i == 98 && j == 99))
        write(1, ", ", 2);
      j++;
    }
    i++;
  }
  
}
int main ()
{
  ft_print_comb();
  return(0);
}