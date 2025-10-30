/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:48:36 by amartel           #+#    #+#             */
/*   Updated: 2025/10/30 18:06:33 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_flag(char const *s)
{
	int	i;

	i = 0;
	const t_function	flag[] = {{'c', ft_putchar}};
	while (flag[i].c)
	{

	}
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int	len;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format++ == '%')
			ft_flag(format);
		write(1, &format[-1], 1);
		format++;
	}
	va_end(ap);
	return (len);
}
