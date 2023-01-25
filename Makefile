# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-str <nvan-str@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/11 16:54:51 by nvan-str      #+#    #+#                  #
#    Updated: 2023/01/25 14:28:06 by nvan-str      ########   odam.nl          #
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
FLAGS = -Wall -Wextra
RM = /bin/rm -f

%.o:%.c
	@clang -c $(FLAGS) -o $@ $^
	@echo "Compiling: $^"

all : $(NAME)

$(NAME): $(OBJ)
	@ar -cr $@ $^

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
	
.PHONY: all clean fclean re 
