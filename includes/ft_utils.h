/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 20:58:40 by amartel           #+#    #+#             */
/*   Updated: 2025/11/03 01:33:24 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
#define FT_UTILS_H

#include <unistd.h>
#include <stdlib.h>
#include "../includes/ft_printf.h"

int			ft_putchar(char c);
int			ft_putnbr(int nb);
void		ft_calloc(size_t mem, size_t size);
void		ft_bzero(void *s, size_t n);
t_function	ft_lstlast(t_function *lst);
t_function	ft_lstadd_back(t_function **lst, t_function *new);
t_function	ft_lstnew(char c, int (*f)(va_list*));
void		ft_lstdelone(t_function **lst, void (*del)(void*));
void		ft_lstclear(t_function **lst, void (*del)(void*));
int			ft_putnbr_base(int nb, char *base); // d, i, x, X
int			ft_strlen(const char *s);
#endif