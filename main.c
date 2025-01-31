#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    size_t  i; 
    char s[16] = "HeLL0 W0Rld777";
    char c;
    char    *ptr;
    int d;
    unsigned int    ex;
    unsigned int    EX;
    unsigned int     u;
    char    *no_ptr;


    i = 0;
    c = '#';
    ptr = &c;
    d = 123456;
    ex = 46238;
    EX = 567;
    u = -12334456;
    no_ptr = NULL;

    
    ft_printf("the string printed is %s\n", s);
    printf("the real printf is: %s\n", s);

    ft_printf("the character printed is %c\n", c);
    printf("the real printf is: %c\n", c);

    ft_printf("the address printed is %p\n", ptr);
    printf("the real printf is: %p\n", ptr);

    ft_printf("the number printed is %d\n", d);
    printf("the real printf is: %d\n", d);  

    ft_printf("the exadecimal printed is %x\n", ex);
    printf("the real printf is: %x\n", ex);

    ft_printf("the EXADECIMAL printed is %X\n", EX);
    printf("the real printf is: %X\n", EX);

    ft_printf("the percent printed is %%\n");
    printf("the real printf is: %%\n");
    
    ft_printf("the unsigned printed is %u\n", u);
    printf("the real printf is: %u\n", u);

    ft_printf("pointer Error %p %p\n", no_ptr, no_ptr);
    printf("the real printf is: %p %p\n", no_ptr, no_ptr);
}