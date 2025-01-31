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