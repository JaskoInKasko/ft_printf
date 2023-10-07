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

static int ft_specifier(const char str, va_list args)
{
    int c;

    c = 0;
    if (str == 'c')
        c += ft_printchar(va_arg(args, int));
    else if (str == 's')
        c += ft_printstr(va_arg(args, char *));
    //else if (str == 'p')
        //c += ft_printmem(va_arg(args, int));
    else if (str == 'd')
        c += ft_printdigits(va_arg(args, int));
    /*else if (str == 'i')
        c +=
    else if (str == 'u')
        c +=
    else if (str == 'x')
        c +=
    else if (str == 'X')
        c +=
    else if (str == '%')
        c +=*/
    return (c);
}

int ft_printf(const char *format, ...)
{
    va_list arg;

    va_start(arg, format);
    int len;
    int i;

    len = 0;
    i = 0;
    while(format[i] != '\0')
    {
        if(format[i] == '%')
            len += ft_specifier(format[++i], arg);
        else
            len += ft_printchar(format[i]);
        i++;
    }
    va_end(arg);
    return (len);
}
/*#include <stdio.h>
int main(void)
{
    ft_printf("%d", 123);
    //printf("%x", c);
    return (0);
}*/