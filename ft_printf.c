
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
    int printed_chars;
    size_t  i;

    printed_chars = 0;
    i = 0;
	va_list args;
    va_start(args, format);

    while(format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            print_format(format[i + 1], args, &printed_chars);
            i += 2;
        }    
        else
        {
            write(1, &format[i], 1);
            printed_chars++;
            i++;
        }
    }
    va_end(args);
    return (printed_chars);
}

void    print_format(int c, va_list args, int *countchar)
{
    if (c == 'c')
        ft_handle_char(args, countchar);
    else if (c == 'd' || c == 'i')
        ft_handle_integer(args, countchar);
    else if (c == 'u')
        ft_handle_unsigned(args, countchar);
    else if (c == 's')
        ft_handle_string(args, countchar);
    else if (c == 'x')
        ft_handle_exadecimal_lower(args, countchar);
    else if (c == 'X')
        ft_handle_exadecimal_upper(args, countchar);
    else if (c == 'p')
        ft_handle_pointers(args, countchar);
    else if (c == '%')
    {
        write(1, "%", 1);
        (*countchar)++;
    } 
}