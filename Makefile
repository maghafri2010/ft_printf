NAME = libftprintf.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putptr.c ft_puthex_lower.c ft_puthex_upper.c ft_putunsigned.c 

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all 