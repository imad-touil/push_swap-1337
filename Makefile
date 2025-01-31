NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c ft_atoi.c ft_putchar.c\
	ft_putnbr.c ft_strlcpy.c ft_split.c\
	ft_strlen.c ft_isdigit.c is_valid_number.c\
	is_valid_range.c is_dublicate.c checker.c\
	print_error.c is_empty.c free_node.c\
	create_node.c addback.c sa.c sb.c ss.c\
	pb.c pa.c ra.c rb.c rr.c rra.c rrb.c rrr.c\
	list_size.c set_index.c sort_two.c sort_three.c\
	sort_four.c set_position.c sort_five.c sort_large.c\
	


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
