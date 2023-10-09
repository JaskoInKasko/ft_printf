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
    int len;

    len = 0;
    if (str == 'c')
        len += ft_printchar(va_arg(args, int));
    else if (str == 's')
        len += ft_printstr(va_arg(args, char *));
    //else if (str == 'p')
        //len += ft_printmem(va_arg(args, int));
    else if (str == 'd' || str == 'i')
        len += ft_print_int(va_arg(args, int), len);
    else if (str == 'u')
        len += ft_print_uint(va_arg(args, unsigned int), len);
    else if (str == 'x')
        len += ft_printhex(va_arg(args, unsigned int), len);
    else if (str == 'X')
        len += ft_printheX(va_arg(args, unsigned int), len);
    else if (str == '%')
        len += ft_printchar(str);
    return (len);
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
    ft_printf("%u", -1);
    printf("\n");
    //printf("%p", NULL);
    //printf("\n");
    printf("%u", -1);
    printf("\n");
    printf("%x", -1);
    printf("\n");
    ft_printf("%x", -1);
    printf("\n");
    printf("%%");
    printf("\n");
    ft_printf("%%");
    //ft_printf(" %s\n %s\n %s\n %s\n %s\n ", " - ", "", "4", "", "2 ");
    return (0);
}*/