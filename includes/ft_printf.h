/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:03:49 by amartel           #+#    #+#             */
/*   Updated: 2025/11/02 00:27:11 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
#define FT_PRINTF

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct s_function
{
	char c;
	int (*f)(va_list*);
//	struct s_function	*next;
}	t_function;

int	ft_putchar_va(va_list *ap);
int	ft_putstr_va(va_list *ap);
int	ft_printf(const char *format, ...);
int	ft_putnbr_va(va_list *ap);
int	ft_putunbr_va(va_list *ap);

#endif