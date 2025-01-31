#include "ft_printf.h"

void    ft_handle_char(va_list args, int *countchar)
{
    unsigned char    c;

    c = (unsigned char)va_arg(args, int);
    write(1, &c, 1);
    (*countchar)++;
}