/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 04:35:14 by guribeir          #+#    #+#             */
/*   Updated: 2022/05/25 15:36:18 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower_hexadecimal(unsigned int nbr)
{
	int		i;
	char	*str;

	str = ft_itoa_base(nbr, "0123456789abcdef");
	i = ft_string(str);
	free(str);
	return (i);
}
