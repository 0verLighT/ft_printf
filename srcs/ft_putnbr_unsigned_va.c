/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_purunsigned_va.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 00:21:16 by amartel           #+#    #+#             */
/*   Updated: 2025/11/02 00:44:12 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/ft_utils.h"

int	ft_putnbr_unsigned_va(va_list *ap)
{
	unsigned int	nb;

	nb = va_arg(*ap, unsigned int);
	return (ft_putnbr_unsigned(nb));
}
