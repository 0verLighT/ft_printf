/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:16:04 by alexandre         #+#    #+#             */
/*   Updated: 2025/11/11 18:16:11 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunbr_base(unsigned int n, char *base)
{
	unsigned int    base_size;
	int             len;

	len = 0;
	base_size = ft_strlen(base);
	if (n >= base_size)
		len += ft_putunbr_base(n / base_size, base);
	len += ft_putchar_base(n % base_size, base);
	return (len);
}