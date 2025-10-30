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
	int (*f)(void *);
}	t_function;

int	ft_putchar(void *c);
int	ft_putstr(void *s);
int		ft_printf(const char *format, ...);
void	ft_putnbr(int nb);
void	ft_putunbr(unsigned int nb);
void	ft_puthex(int nb);

#endif