/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:44:49 by guribeir          #+#    #+#             */
/*   Updated: 2022/05/25 16:24:33 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal(int nbr)
{
	size_t	num_size;

	num_size = 1;
	ft_putnbr_fd(((long) nbr), 1);
	while (nbr >= 10 || nbr <= -10)
	{
		nbr /= 10;
		num_size++;
	}
	if (nbr < 0)
		return (num_size + 1);
	return (num_size);
}
