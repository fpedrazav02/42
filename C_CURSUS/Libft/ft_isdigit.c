#include<stdio.h>

int ft_isdigit(int c)
{
    return (c >= 48 && c<= 59);   
}

int main ()
{
    printf("%i\n", ft_isdigit('m'));
    return (0);
}