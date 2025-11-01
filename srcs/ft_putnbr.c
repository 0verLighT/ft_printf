/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 00:10:08 by amartel           #+#    #+#             */
/*   Updated: 2025/11/02 00:15:48 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"

int	ft_putnbr(int nb)
{
	long	ln;
	long	divider;
	int		len;

	len = 0;
	ln = nb;
	if (nb < 0)
	{
		len = 1;
		ft_putchar('-');
		ln = -ln;
	}
	divider = 1;
	while (divider * 10 <= ln)
		divider = divider * 10;
	while (divider)
	{
		ft_putchar(ln / divider % 10 + '0');
		ln %= divider;
		divider /= 10;
		++len;
	}
	return (len);
}
