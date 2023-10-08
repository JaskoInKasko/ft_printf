/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsakanov <jsakanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:14:03 by jsakanov          #+#    #+#             */
/*   Updated: 2023/10/07 13:14:43 by jsakanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printstr(const char *s)
{
	int i;

	i = 0;
	if(!s)
	{
		return(write(1, "(null)", 6));
	}
	else
	{
		while (s[i] != '\0')
		{
			write(1 , &s[i], 1);
			i++;
		}
	}
	return (i);
}
