/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:03:49 by amartel           #+#    #+#             */
/*   Updated: 2025/10/29 23:04:43 by amartel          ###   ########.fr       */
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

int	ft_putchar(va_list *ap);
int	ft_putstr(va_list *ap);
int	ft_printf(const char *format, ...);
int	ft_putnbr(va_list *ap);
void	ft_putunbr(unsigned int nb);
void	ft_puthex(int nb);

#endif