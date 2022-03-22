#include<stdio.h>
int ft_isupper(int c)
{
    return (c >= 65 && c<= 90);   
}

int ft_tolower(int x)
{
    if(ft_isupper(x))
        x += 32;
    return (x);
}

int main ()
{
    char letra;

    letra = 'B';
    printf("%c\n", ft_tolower(letra));
    return (0);
}