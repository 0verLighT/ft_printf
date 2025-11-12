/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:41:40 by amartel           #+#    #+#             */
/*   Updated: 2025/11/03 01:07:30 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_va(va_list *ap)
{
	int	nb;

	nb = va_arg(*ap, int);
	return (ft_putnbr_base(nb, "0123456789"));
}
