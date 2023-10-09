#include "ft_printf.h"

unsigned int ft_printheX(unsigned int n, int len)
{
    char base[17] = "0123456789ABCDEF";

    if(n >= 16)
    {
        len += ft_printheX(n / 16, 0);
        len += ft_printheX(n % 16, 0);
    }
    else if (n <= 16)
        len += ft_printchar(base[n]);
    return(len);
}