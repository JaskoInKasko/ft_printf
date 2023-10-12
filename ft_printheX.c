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