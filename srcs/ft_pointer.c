/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 04:46:13 by guribeir          #+#    #+#             */
/*   Updated: 2022/05/25 16:06:18 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *addr)
{
	size_t			count;
	char			*str;
	unsigned long	address;

	if (!addr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	address = (unsigned long)addr;
	count = ft_string("0x");
	str = ft_itoa_base(address, "0123456789abcdef");
	count += ft_string(str);
	free(str);
	return (count);
}
