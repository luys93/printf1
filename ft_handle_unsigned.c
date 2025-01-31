#include "ft_printf.h"

void    ft_handle_unsigned(va_list args, int *countchar)
{
    unsigned int    u;

    u = va_arg(args, unsigned int);
    ft_putnbr_base(u, "0123456789", countchar);
}