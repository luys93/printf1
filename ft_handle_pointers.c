#include "ft_printf.h"

void    ft_handle_pointers(va_list args, int *countchar)
{
    void    *ptr;

    ptr = va_arg(args, void *);

    if(!ptr)
    {
        write(1, "0x0", 3);
        (*countchar)+= 3;
        return ;
    }
    write(1, "0x", 2);
    (*countchar) += 2;
    ft_putnbr_base((unsigned long long)ptr, "0123456789abcdef", countchar);//attento al tipo di dato come primo parametro
}