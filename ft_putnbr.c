/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:41:40 by amartel           #+#    #+#             */
/*   Updated: 2025/10/30 01:30:31 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr_int(int nb)
{
	int len = 0;

	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		len += write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		len += ft_putnbr_int(nb / 10);
	len += ft_putchar_c(nb % 10 + '0');
	return (len);
}

int	ft_putnbr(va_list *ap)
{
	int nb = va_arg(*ap, int);
	return (ft_putnbr_int(nb));
}