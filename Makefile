NAME = libftprintf.a

SRC = ft_printf_escribir.c ft_printf_hex.c ft_printf_num.c ft_printf_str.c ft_printf.c

OBJ =  ft_printf_escribir.o ft_printf_hex.o ft_printf_num.o ft_printf_str.o ft_printf.o

CC = gcc

CFLAGS = -Wall -Werror -Wextra

$(NAME): ${OBJ}
	ar rcs ${NAME} ${OBJ}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
