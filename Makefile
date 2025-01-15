NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = push_swap.c ft_atoi.c ft_putchar.c\
		ft_putnbr.c  ft_putstr.c 
OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean  
