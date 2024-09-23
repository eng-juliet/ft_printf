NAME = libftprintf.a
SOURCES = \
	  ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_unsigned.c ft_hex.c ft_pointer.c
OBJECTS = $(SOURCES:.c=.o)

CC = cc
GFLAGS = -Wall -Wextra -Werror
AR = ar

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -rcs $@ $^

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
