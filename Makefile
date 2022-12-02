# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-str <nvan-str@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/11 16:54:51 by nvan-str      #+#    #+#                  #
#    Updated: 2022/12/02 10:43:09 by nvan-str      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC =	ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_printf.c\
		ft_putnbr_unsigned.c\
		ft_num_in_hex.c\
		

OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
RM = /bin/rm -f

%.o:%.c
	@gcc -c $(FLAGS) -o $@ $^
	@echo "📠 Compiling: $^"

all : $(NAME)

$(NAME): $(OBJ)
	@ar -cr $@ $^

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
	
.PHONY: all clean fclean re 
