#include "ft_printf.h"

void    ft_handle_integer(va_list args, int *countchar)
{
    int    d;
    
    d = va_arg(args, int);
    if (d < 0)
    {
        write(1, "-", 1);
        d = -d;
        (*countchar)++;
    }
    ft_putnbr_base((unsigned int)d,"0123456789", countchar);
    //(*countchar)++;
}
