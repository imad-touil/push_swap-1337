NAME = push_swap
B_NAME = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror

#---------------------| Mandatory |----------------
# *****************| mouves sources |**************

MV_SRCS = ./mouves/pa.c ./mouves/pb.c ./mouves/ra.c\
	./mouves/rb.c ./mouves/rr.c ./mouves/rra.c\
	./mouves/rrb.c ./mouves/rrr.c ./mouves/sa.c\
	./mouves/sb.c ./mouves/ss.c\

# ******************| parsing sources |******************

PR_SRCS = ./parsing/ft_isdigit.c ./parsing/is_dublicate.c\
	./parsing/is_empty.c ./parsing/is_valid_number.c\
	./parsing/is_valid_range.c ./parsing/print_error.c\

# ******************| sorting sources |***************

ST_SRCS = ./sorting/sort_two.c ./sorting/sort_three.c\
	./sorting/sort_four.c ./sorting/sort_five.c\
	./sorting/sort_large.c\

# ************| utils sources |***************

UT_SRCS = ./utils/addback.c ./utils/fill_stack.c\
	./utils/create_node.c ./utils/free_node.c\
	./utils/ft_atoi.c ./utils/ft_putchar.c\
	./utils/ft_putnbr.c ./utils/ft_split.c\
	./utils/ft_strlcpy.c ./utils/ft_strlen.c\
	./utils/list_size.c ./utils/set_index.c\
	./utils/set_position.c\

# ***************| SRCS and OBJS |****************

SRCS = $(MV_SRCS) $(PR_SRCS) $(ST_SRCS) $(UT_SRCS) push_swap.c 

OBJS = $(SRCS:.c=.o) 
#---------------------| Mandatory |----------------



#---------------------| Bonus |--------------------

# ***************| Bonus Mouves |****************

B_MV = ./bonus/mouves/pa.c ./bonus/mouves/pb.c ./bonus/mouves/ra.c\
	./bonus/mouves/rb.c ./bonus/mouves/rr.c ./bonus/mouves/rra.c\
	./bonus/mouves/rrb.c ./bonus/mouves/rrr.c ./bonus/mouves/sa.c\
	./bonus/mouves/sb.c ./bonus/mouves/ss.c\

# ***************| Bonus sorting |****************

B_SR = ./bonus/sorting/sort_two.c ./bonus/sorting/sort_three.c\
	./bonus/sorting/sort_four.c ./bonus/sorting/sort_five.c\
	./bonus/sorting/sort_large.c\

# ***************| Bonus utiles |****************

B_UT = ./bonus/utils/apply.c ./bonus/utils/ft_strncmp.c\
	./bonus/checker.c ./bonus/utils/ko.c ./bonus/utils/get_min.c\

# ***************| Bonus G.N.Line |****************

B_NL = ./get_next_line/get_next_line.c\
	./get_next_line/get_next_line_utils.c\


B_SRCS = $(B_MV) $(B_SR) $(UT_SRCS) $(B_NL) $(PR_SRCS) $(B_UT)

B_OBJS = $(B_SRCS:.c=.o)


#---------------------| Bonus |--------------------



all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)


bonus: $(B_NAME)

$(B_NAME): $(B_OBJS)
	$(CC) $(B_SRCS) -o $(B_NAME)

%.o: %.c push_swap.h 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	@rm -rf $(NAME) $(B_NAME)

re: fclean all

.PHONY: clean  


