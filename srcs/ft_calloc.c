/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:39:03 by amartel           #+#    #+#             */
/*   Updated: 2025/11/01 21:39:03 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_utils.h"

void	ft_calloc(size_t mem, size_t size)
{
	void	*ptr;

	if (mem == 0 || size == 0)
		return (malloc(0));
	if (mem > (size_t)-1 / size)
		return (NULL);
	ptr = malloc(mem * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, mem * size);
	return (ptr);
}
