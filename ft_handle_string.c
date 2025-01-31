#include "ft_printf.h"

void    ft_handle_string(va_list args, int *countchar)
{
    char    *str;
    size_t  i;

    str = va_arg(args, char *);
    if (!str)
    {
        write(1, "(null)", 6);
        (*countchar) += 6;
        return ;
    } 
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        (*countchar)++;
        i++;
    }
}