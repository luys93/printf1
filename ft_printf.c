
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

/*void    handle_string(va_list args)
{
    char    s;
    char    *str;
    size_t  i;

    str = va_arg(args, char *);
    if (!str)
        write(1, '(null)', 6);
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void    handle_integer(va_list args)
{
    int    d;

    d = va_arg(args, int);
    ft_putnbr_base(d,"0123456789");
}

void    handle_pointers(va_list args)
{
    void    *ptr;

    ptr = va_arg(args, void *);

    if(!ptr)
        write(1, '(nil)', 5);
    else
    {
        write(1, "0x", 2);
        ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");//attento al tipo di dato come primo parametro
    }    

}

void    handle_exadecimal_lower(va_list args)
{
    unsigned int    d;

    d = va_arg(args, unsigned int);
    ft_putnbr_base(d, "0123456789abcdef");
}

void    handle_exadecimal_upper(va_list args)
{
    unsigned int    d;

    d = va_arg(args, unsigned int);
    ft_putnbr_base(d, "0123456789ABCDEF");
}

void    handle_char(va_list args)
{
    char    c;

    c = va_arg(args, int)
    write(1, &c, 1);
}

void    handle_unsigned(va_list args)
{
    unsigned int    u;

    u = va_arg(args, unsigned int);
    ft_putnbr_base(u, "0123456789");

}*/

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

/*int main(void)
{
    size_t  i; 
    char c[16] = "HeLL0 W0Rld777";

    i = 0;
    while (i <= 16)
    {
        ft_printf("the character printed is :%c\n", c);
        i++;
    }
}*/