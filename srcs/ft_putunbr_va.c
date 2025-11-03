/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_purunsigned_va.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 00:21:16 by amartel           #+#    #+#             */
/*   Updated: 2025/11/03 01:21:25 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/ft_utils.h"

static int ft_putunbr(unsigned int nb)
{
	if (nb >= 10)
		ft_putunbr(nb / 10);
	ft_putchar(nb % 10 + '0');
	return (0);
}
int	ft_putunbr_va(va_list *ap)
{
	unsigned int	nb;

	nb = va_arg(*ap, unsigned int);
	return (ft_putunbr(nb));
}
