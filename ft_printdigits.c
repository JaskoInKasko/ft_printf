/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsakanov <jsakanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:14:42 by jsakanov          #+#    #+#             */
/*   Updated: 2023/10/07 17:14:50 by jsakanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_printdigits(long n)
{
    if(n >= 0 && n < 10)
    {
        n += '0';
        write(1, &n, 1);
    }
    else if (n >= 10)
    {
        ft_printdigits(n / 10);
        ft_printdigits(n % 10);
    }
    else if (n < 0)
    {
        write(1, "-", 1);
        n = n * (-1);
        ft_printdigits(n / 10);
        ft_printdigits(n % 10); 
    }
    return (n);
}