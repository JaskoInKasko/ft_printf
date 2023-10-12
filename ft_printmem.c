/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsakanov <jsakanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:54:48 by jsakanov          #+#    #+#             */
/*   Updated: 2023/10/04 11:54:53 by jsakanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_printmem(void *ptr, int len)
{
    char    base[17] = "0123456789abcdef";
    char    hexn[22];
    size_t  address;
    int     offset;
    int     digit;

    offset = 0;
    address = (size_t)ptr;
    if(ptr == 0)
        return (len += write(1, "(nil)", 5));
    len += write(1, "0x", 2);
    while(address > 0)
    {
        digit = address % 16;
        hexn[offset++] = base[digit];
        address /= 16;
    }
    offset -= 1;
    while(offset >= 0)
        len += ft_printchar(hexn[offset--]);
    return (len);
}
/*#include <stdio.h>
int main(void)
{
    int a;
    ft_printmem(&a, 0);
    printf("\n%p\n", &a);
    printf("%p\n%p ", 0, 0);
}*/