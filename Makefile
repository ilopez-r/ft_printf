# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/06 13:07:02 by ilopez-r          #+#    #+#              #
#    Updated: 2023/06/06 16:19:39 by ilopez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

FILES = ft_printchar.c\
		ft_printstr.c\
		ft_printptr.c\
		ft_printdec.c\
		ft_printunsigned.c\
		ft_printhexa.c\
		ft_printf.c\

OBJS = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS) : $(FILES)
	gcc $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re : fclean all

.PHONY : all re fclean clean