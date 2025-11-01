/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:48:03 by amartel           #+#    #+#             */
/*   Updated: 2025/10/30 17:31:15 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int    ft_putstr_va(va_list *ap)
{
	char *str;
	int len;

	len = 0;
	str = (char *)va_arg(*ap, char *);
    while (str[len])
    {
        write(1, &str[len++], 1);
    }
	return (len);
}
