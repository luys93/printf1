#include "ft_printf.h"

void    ft_handle_exadecimal_upper(va_list args, int *countchar)
{
    unsigned int    d;

    d = va_arg(args, unsigned int);
    ft_putnbr_base(d, "0123456789ABCDEF", countchar);
}