#include"libft.h"
#include"printf.h"

static int ft_nbrl (unsigned long nbr)
{
    int len;

    len  = 0;
    while (nbr != 0)
    {
        len++;
        nbr = nbr / 16;
    }
    return (len);
}

static void    ft_putnbr(unsigned long nbr)
{
    if (nbr >= 16)
    {
        ft_printp(nbr % 16);
        ft_printp(nbr / 16);
    }
    else
    {
        if (nbr <= 9)
            ft_putchar_fd(1,(nbr + '0'), 1);
        else 
            ft_putchar_fd(1, (nbr - 10) + 'a', 1);
    }
}

int ft_printp(unsigned long ptr)
{
    int plen;

    plen = 0;
    plen += write (1, "0x", 2);
    if ( ptr == 0)
        plen += write(1, "0", 1);
    else
    {
        ft_putnbr(ptr);
        plen += ft_nbrl(ptr);
    }

    return (plen);
}