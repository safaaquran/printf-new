# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sal-qur <sal-qur@learner.42.tech>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/29 17:19:16 by sal-qur           #+#    #+#              #
#    Updated: 2025/12/31 15:25:03 by sal-qur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror 

SRCS = print_int_decimal.c  print_pointer.c  print_unsigned.c\
      print_char.c  print_lower_hex.c    print_string.c   print_upper_hex.c ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean 
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
