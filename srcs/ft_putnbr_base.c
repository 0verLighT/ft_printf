/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 00:37:12 by amartel           #+#    #+#             */
/*   Updated: 2025/11/03 01:19:24 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"

static int	ft_putchar_base(int nb, char *base)
{
	return (write(1, &base[nb], 1));
}

int	ft_putnbr_base(int nb, char *base)
{
	int	base_size;

	base_size = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb > -base_size + 1)
			ft_putnbr_base(nb / base_size, base);
		ft_putnbr_base((nb % base_size) * -1, base);
	}
	else if (nb > base_size - 1)
	{
		ft_putnbr_base(nb / base_size, base);
		ft_putnbr_base(nb % base_size, base);
	}
	else
		ft_putchar_base(nb, base);
	return (1);
}
