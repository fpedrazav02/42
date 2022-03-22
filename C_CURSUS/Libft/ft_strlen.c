#include<stdio.h>

size_t ft_strlen (char *str)
{
    int i;

    i = 0;
    while(*str++)
        i++;
    return(i);
}

int main ()
{
    char str[]= "holacaracolaholacaracola";
    printf("%zu", ft_strlen(str));
    return(0);
}