NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = push_swap.c ft_atoi.c ft_putchar.c\
	ft_putnbr.c ft_strlcpy.c ft_split.c\
	ft_strlen.c ft_isdigit.c is_valid_number.c\
	is_valid_range.c is_dublicate.c checker.c\
	print_error.c is_empty.c free_node.c\
	sa.c sb.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean  
