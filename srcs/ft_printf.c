/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:48:36 by amartel           #+#    #+#             */
/*   Updated: 2025/11/11 18:06:10 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_flag(const char *s, va_list *ap, int *len)
{
	char					spec;
	int						i;
	static const t_function	flag[] = {{'c', ft_putchar_va}, {'s', ft_putstr_va},
	{'p', ft_putaddr_va}, {'i', ft_putnbr_va}, {'d', ft_putnbr_va},
	{'u', ft_putunbr_va}, {'%', ft_putchar_va}, {0, NULL}};

	i = 0;
	spec = s[1];
	if (spec == 'x' || spec == 'X')
	{
		*len += ft_puthex_va(ap, spec);
		return (2);
	}
	while (flag[i].c)
	{
		if (flag[i].c == spec)
		{
			*len += flag[i].f(ap);
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
	int	i;

	len = 0;
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
			i += ft_flag(&format[i], &ap, &len);
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
