#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_printchar(char c);

int ft_printf(const *str, ...);

int ft_format(va_list list, const char format);

int ft_putstr(char *str);
#endif /*....ft_PRINTF_H*/