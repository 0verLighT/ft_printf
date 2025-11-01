/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:41:40 by amartel           #+#    #+#             */
/*   Updated: 2025/11/02 00:13:52 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/ft_utils.h"

int	ft_putnbr_va(va_list *ap)
{
	int	nb;

	nb = va_arg(*ap, int);
	return (ft_putnbr(nb));
}
