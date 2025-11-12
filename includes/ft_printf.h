/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:03:49 by amartel           #+#    #+#             */
/*   Updated: 2025/11/12 03:03:32 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
#define FT_PRINTF

#include <unistd.h>
#include <stdarg.h>

typedef struct s_function
{
	char c;
	int (*f)(va_list*);
}	t_function;

int	ft_putchar_va(va_list *ap);
int	ft_putchar(int c);
int	ft_putstr_va(va_list *ap);
int	ft_printf(const char *format, ...);
int	ft_putnbr_va(va_list *ap);
int	ft_putunbr_va(va_list *ap);
int	ft_puthex_va(va_list *ap, char spec);
int	ft_putaddr_va(va_list *ap);
int	ft_putunbr_base(unsigned int n, char *base);
int	ft_strlen(const char *s);
int	ft_putnbr_base(int nb, char *base);
int	ft_putchar_base(int nb, char *base);
int ft_putunbr_long_base(unsigned long n, char *base);

#endif