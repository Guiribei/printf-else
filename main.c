/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 05:26:01 by guribeir          #+#    #+#             */
/*   Updated: 2022/05/25 16:33:34 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	main(void)
{
	int 	num;
	int		num2;
	int		num3;
	char	letter;
	int		count;
	char 	*str;
	void	*pointer;

	count = 0;
	pointer = &letter;
	num = -5001;
	num2 = 10;
	num3 = -1;
	letter = 'F';
	str = "la entao";
	count = ft_printf("bora %d %c %s %p %u %x %X\n", num, letter, str, pointer, num3, num2, num2);
	ft_printf("Tamanho: %d\n", count);
	return (0);
}