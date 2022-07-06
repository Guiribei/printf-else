/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:45:45 by guribeir          #+#    #+#             */
/*   Updated: 2022/05/25 16:25:28 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa_base(size_t n, char *base);
int		ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *s);

int		ft_char(char c);
int		ft_string(char *str);
int		ft_pointer(void *addr);
int		ft_decimal(int nbr);
int		ft_unsigned_decimal(unsigned int nbr);
int		ft_lower_hexadecimal(unsigned int nbr);
int		ft_upper_hexadecimal(unsigned int nbr);
int		ft_percent(char c);
int		ft_is_argument(int c);
int		ft_printf(const char *format, ...);

#endif