#include "ft_printf.h"

size_t  ft_strlen(char *str)
{
    size_t  i;

    if (!str)
        return (0);
    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putstr(char *str)
{
    if (!str)
        return ;
    write(1, str, ft_strlen(str));
}

void   ft_putnbr_base(unsigned long nbr, char *base, int *countchar)
{
    size_t  baselen;

    baselen = ft_strlen(base);

    if (baselen < 2)
        return ;

    if (nbr >= baselen)
        ft_putnbr_base(nbr/baselen, base, countchar);
    write(1, &base[nbr % baselen], 1);
    (*countchar)++;

}

/*char    *ft_itoa_base(int n)
{
    return (ft_putnbr_base(n, "0123456789"));
}

char    *ft_utoa_base(unsigned int n)
{
    return (ft_putnbr_base(n, "0123456789"));
}*/