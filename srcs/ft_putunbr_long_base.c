/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putubnbr_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 03:17:56 by alexandre         #+#    #+#             */
/*   Updated: 2025/11/12 03:17:58 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_putunbr_long_base(unsigned long n, char *base)
{
	unsigned long base_size;
	int             len;

	len = 0;
	base_size = ft_strlen(base);
	if (n >= base_size)
		len += ft_putunbr_base(n / base_size, base);
	len += ft_putchar_base(n % base_size, base);
	return (len);
}