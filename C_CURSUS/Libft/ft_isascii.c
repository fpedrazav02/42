#include<stdio.h>

int ft_isascii(int c)
{
    return (c >= 0 && c<= 127);   
}

int main ()
{
   

    printf("%d\n", ft_isascii('m'));
    return (0);
}