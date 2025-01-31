#include "ft_printf.h"

void    ft_handle_string(va_list args, int *countchar)
{
    char    *str;

    str = va_arg(args, char *);
    if (!str)
    {
        ft_putstr("(null)");
        //write(1, "(null)", 6);
        return ;
    } 
    write(1, str, (unsigned long)countchar);
}