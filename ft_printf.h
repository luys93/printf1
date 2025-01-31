
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>

void    print_format(int c, va_list args, int *countchar);
void    ft_handle_unsigned(va_list args,int *countchar);
void    ft_handle_char(va_list args, int *countchar);
void    ft_handle_exadecimal_upper(va_list args, int *countchar);
void    ft_handle_exadecimal_lower(va_list args, int *countchar);
void    ft_handle_pointers(va_list args, int *countchar);
void    ft_handle_integer(va_list args, int *countchar);
void    ft_handle_string(va_list args, int *countchar);
void    ft_putnbr_base(unsigned long nbr, char *base, int *countchar);
size_t  ft_strlen(char *str);
int	    ft_printf(const char *format, ...);

#endif