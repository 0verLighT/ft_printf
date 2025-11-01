/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:32:12 by amartel           #+#    #+#             */
/*   Updated: 2025/11/01 21:32:12 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/ft_utils.h"

t_function	ft_lstnew(char c, int (*f)(va_list*))
{
	t_function	*new;

	if (!c || !f)
		return (NULL);
	new = ft_calloc(1, sizeof(t_function));
	if (!new)
		return (NULL);
	new->c = c;
	new->f = f;
}
