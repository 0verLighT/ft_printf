/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:47:51 by amartel           #+#    #+#             */
/*   Updated: 2025/11/02 00:11:52 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putchar_va(va_list *ap)
{
	int	c;

	c = va_arg(*ap, int);
	write(1, &c, 1);
	return (1);
}
