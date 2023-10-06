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

char ft_putchar(const char c)
{
    write(1, &c, 1);
    return (1);
}

char ft_putstr(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1 , &s[i], 1);
		i++;
	}
    return (s[i]);
}

static int ft_specifier(const char str, va_list args)
{
    int c;

    c = 0;
    if (str == 'c')
        c += ft_putchar(va_arg(args, int));
    else if (str == 's')
        c += ft_putstr(va_arg(args, char *));
    else if (str == 'p')
        c +=
    else if (str == 'd')
        c +=
    else if (str == 'i')
        c +=
    else if (str == 'u')
        c +=
    else if (str == 'x')
        c +=
    else if (str == 'X')
        c +=
    else if (str == '%')
        c +=
    return (c);
}

int ft_printf(const char *format, ...)
{
    va_list arg;

    va_start(arg, format);
    int c;
    int i;

    c = 0;
    i = 0;
    while(format[i] != '\0')
    {
        if(format[i] == '%')
            c += ft_specifier(format[i + 1], arg);
        else
            c += ft_putchar(format[i]);
        i++;
    }
    va_end(arg);
    return (c);
}

int main(void)
{
    char    c;

    c = 'a';
    ft_printf("fdfdf");
    return (0);
}