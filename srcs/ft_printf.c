/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:48:36 by amartel           #+#    #+#             */
/*   Updated: 2025/11/01 00:44:19 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	ft_flag(const char *s, va_list *ap)
{
	int					i;
	int					len;
	const t_function	flag[] = {{'c', ft_putchar_va},{'s', ft_putstr_va},{'i', ft_putnbr_va},{'d', ft_putnbr_va},{0, NULL}};

	i = 0;
	len = 0;
	while (flag[i].c)
	{
		if (flag[i].c == s[1])
		{
			len += flag[i].f(ap);
			return (2);
		}
		++i;
	}
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
			i += ft_flag(&format[i], &ap);
		else
		{
			write(1, &format[i], 1);
			len++;
			i++;
		}
	}
	va_end(ap);
	return (len);
}
