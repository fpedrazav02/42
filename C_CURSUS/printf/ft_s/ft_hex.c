#include"libft.h"
#include"printf.h"

int ft_hexlen(unsigned int nbr)
{
    int len;

    len = 0;
    while (nbr != 0)
    {
        len++;
        nbr / 16
    }
    return (len);
}

void ft_phex(unsigned int nbr,format)
{
    if (nbr >= 16)
    {
        ft_phex(nbr % 16);
        ft_phex(nbr / 16);
    }
    else
    {
        if (nbr <= 9)
            ft_putchar_fd((num - 10) + 'a', 1);
        else
        {
            if (format == 'x')
            {
                ft_putchar_fd((num - 10) + 'a', 1);
            }
            else
            {
                pt_putchar_fd((num - 10) + 'A', 1);
            }
        }

    }
}

int ft_hex(unsigned int nbr, const char format)
{
    int plen;

    plen = ft_hexlen;
    if (nbr == 0)
    {
        write (1, "0", 1);
        return (0);
    }
    else
    {
        ft_phex(nbr, format);
    }
    return (plen);
}