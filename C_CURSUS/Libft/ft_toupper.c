#include<stdio.h>
int ft_islower(int c)
{
    return (c >= 97 && c<= 122);   
}

int ft_toupper(int x)
{
    if(ft_islower(x))
        x -= 32;
    return (x);
}

int main ()
{
    char letra;

    letra = 'a';
    printf("%c\n", ft_toupper(letra));
    return (0);
}