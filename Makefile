SRC = ft_printf.c \
	  ft_switcher.c \
	  ft_putstr.c \
	  ft_putchr.c \
	  ft_putptr.c \
	  ft_putnbr.c \
	  ft_putdec.c
CFLAGS = -Wall -Werror -Wextra
OBJECTS = $(SRC:.c=.o)
NAME = libftprintf.a
DEPS = ft_printf.h
AR = ar rcs
RM = rm -rf
CC = gcc

all: $(NAME)

$(NAME): $(OBJECTS) $(DEPS)
	@$(AR) $(NAME) $(OBJECTS)

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY = all clean fclean re
