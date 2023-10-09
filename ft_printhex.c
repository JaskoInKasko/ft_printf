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
#include <stdio.h>
unsigned int ft_printhex(unsigned int n)
{
    char    hexn[100];
    unsigned int res;
    unsigned int    i;

    res = 0;
    i = 0;
    if(n == 0)
    {
        write(1, "0", 1);
        return (0);
    }
    while(n > 0)
    {
        res = n % 16;
        if(res < 10)
            hexn[i++] = 48 + res;
        else
            hexn[i++] = 55 + res;
        n = n / 16;
    }
    while(i > 0)
        write(1, &hexn[i--], 1);
    write(1, &hexn[i], 1);
    return (i);
}

int main(void)
{
    ft_printhex(3432);
}