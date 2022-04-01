#include"libft.h"
#include"printf.h"

int ft_format(va_list list, const char format)
{
    int plen;

    plen = 0;
    if (format == 'c')
        plen += ft_printchar(va_arg(list, int));
    else if (format == 's')
        plen += ft_printstr(va_arg(list, char *));
    else if (format == 'd' || format == 'i')
        plen += ft_printnbr(va_arg(list, int));
    else if (format == 'u')
        plen += ft_printunbr(va_arg(list, unsigned int));
    else if (format == '%')
		plen += ft_printpercent();
    else if (format == 'p')
        plen += ft_printp(va_arg(list, unsigned long));
    else if (format == 'x' || format == 'X')
        plen += ft_hex(va_arg(list, unsigned int), format);
    return (plen);
}

int ft_printf(const *str, ...)
{
    int i;
    int plen;
    va_list list;
    va_start(list, str);

    i = 0;
    plen = 0;
    while (s[i])
    {
        if (str[i] == '%')
        {
           plen = plen + ft_format(str[i + i]);
            i++;
        }
        else
            plen = plen + ft_printchar(str[i]);
        i++;
    }
    return (plen);
}