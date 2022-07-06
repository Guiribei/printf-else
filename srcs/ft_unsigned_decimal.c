/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 04:54:59 by guribeir          #+#    #+#             */
/*   Updated: 2022/05/25 15:47:47 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_decimal(unsigned int nbr)
{
	int		count;
	char	*str;

	str = ft_itoa_base(nbr, "0123456789");
	count = ft_string(str);
	free(str);
	return (count);
}
