/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:56:35 by guribeir          #+#    #+#             */
/*   Updated: 2022/05/25 15:45:59 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(int c, va_list args)
{
	if (c == 'c')
		return (ft_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_string(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_pointer(va_arg(args, void *)));
	else if (c == 'i' || c == 'd')
		return (ft_decimal(va_arg(args, int)));
	else if (c == 'u')
		return (ft_unsigned_decimal(va_arg(args, unsigned long)));
	else if (c == 'x')
		return (ft_lower_hexadecimal(va_arg(args, unsigned long)));
	else if (c == 'X')
		return (ft_upper_hexadecimal(va_arg(args, unsigned long)));
	else if (c == '%')
		return (ft_percent(c));
	else
		return (0);
}

static int	ft_func_arg(const char *str, va_list args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != '%')
			count += ft_putchar_fd(str[i], 1);
		else if ((str[i] == '%') && str[i + 1])
		{
			i++;
			if (ft_is_argument(str[i]))
				count += ft_formats(str[i], args);
			else if (str[i])
				count += ft_putchar_fd(str[i], 1);
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*str;
	int			count;

	count = 0;
	str = ft_strdup(format);
	if (!str)
		return (0);
	va_start(args, format);
	count += ft_func_arg(str, args);
	va_end(args);
	free((void *)str);
	return (count);
}
