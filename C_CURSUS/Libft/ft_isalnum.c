#include<stdio.h>

int ft_isalnum(int c)
{
    return ((c >= 97 && c<= 122) ||  (c >= 65 && c<= 90) ||(c >= 48 && c<= 59));   
}

int main ()
{
    char letra;

    letra = '9';
    printf("%i\n", ft_isalnum(letra));
    return (0);
}