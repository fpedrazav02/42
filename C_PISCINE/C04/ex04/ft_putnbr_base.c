#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	 bl;
	int	 nb;

	bl = check_base(base);
	if (bl == 0)
		return ;
	if (nbr < 0)
	{
		ft_write('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb >= bl)
	{
		ft_putnbr_base(nb / bl, base);
		ft_write(base[nb % bl]);
	}
	else
		ft_write(base[nb % bl]);
}

int main(void)
{
    char    base_bin[] = "01";
    char    base_hex[] = "0123456789ABCDEF";
    char    base_dec[] = "0123456789";
    char    base_oct[] = "poniguay";
    char    base_err1[] = "";
    char    base_err2[] = "A";
    char    base_err3[] = "not+2";
    char    base_err4[] = "not3-";
    char    base_err5[] = "abcda";
    int     number = 160;
    ft_putnbr_base(number, base_bin);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_hex);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_dec);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_oct);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_err1);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_err2);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_err3);
    write(1, "\n", 1);
    ft_putnbr_base(number, base_err4);
    return (0);
}