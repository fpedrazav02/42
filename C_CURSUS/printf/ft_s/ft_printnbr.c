#include"libft.h"
#include"printf.h"

int ft_printnbr(int n)
{
    int len;
    char *num;

    num = ft_itoa(n);
    len = ft_printstr(num);
    free(num);
    return (len);
}