# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 01:43:45 by guribeir          #+#    #+#              #
#    Updated: 2022/05/25 16:07:26 by guribeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ./srcs/ft_char.c \
		./srcs/ft_decimal.c \
		./srcs/ft_is_argument.c \
		./srcs/ft_lower_hexadecimal.c \
		./srcs/ft_percent.c \
		./srcs/ft_pointer.c \
		./srcs/ft_printf.c \
		./srcs/ft_string.c \
		./srcs/ft_unsigned_decimal.c \
		./srcs/ft_upper_hexadecimal.c \
		./utils/ft_putchar_fd.c \
		./utils/ft_putnbr_fd.c \
		./utils/ft_putstr_fd.c \
		./utils/ft_itoa_base.c \
		./utils/ft_calloc.c \
		./utils/ft_strdup.c \
		./utils/ft_strlen.c \

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all:	$(NAME)

$(NAME):$(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo "\33[1;92m[SUCCESS] Library creation done!\33[0m"

.c.o:
	@gcc $(FLAGS) -c $< -o $(<:.c=.o) -I include/
	@echo "\033[1;92m[SUCCESS] $@ creation done!\033[0m"

clean:
	@rm -f $(OBJ)
	@echo "\33[1;93m[SUCCESS] Objects removal done!\33[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;93m[SUCCESS] Library removal done!\33[0m"

re: fclean all

.PHONY: all clean fclean re
