NAME = push_swap
B_NAME = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror



#---------------------| START Mandatory |----------------
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
	./utils/set_position.c ./utils/lstclear.c\

# ***************| SRCS and OBJS |****************

SRCS = $(MV_SRCS) $(PR_SRCS) $(ST_SRCS) $(UT_SRCS) push_swap.c 

OBJS = $(SRCS:.c=.o) 
#---------------------| END Mandatory |----------------



#---------------------| START Bonus |--------------------

# ***************| Bonus Mouves |****************

B_MV = ./bonus/mouves_bonus/pa_bonus.c ./bonus/mouves_bonus/pb_bonus.c ./bonus/mouves_bonus/ra_bonus.c\
	./bonus/mouves_bonus/rb_bonus.c ./bonus/mouves_bonus/rr_bonus.c ./bonus/mouves_bonus/rra_bonus.c\
	./bonus/mouves_bonus/rrb_bonus.c ./bonus/mouves_bonus/rrr_bonus.c ./bonus/mouves_bonus/sa_bonus.c\
	./bonus/mouves_bonus/sb_bonus.c ./bonus/mouves_bonus/ss_bonus.c\

# ***************| Bonus sorting |****************

B_SR = ./bonus/sorting_bonus/sort_two_bonus.c ./bonus/sorting_bonus/sort_three_bonus.c\
	./bonus/sorting_bonus/sort_four_bonus.c ./bonus/sorting_bonus/sort_five_bonus.c\
	./bonus/sorting_bonus/sort_large_bonus.c\

# ***************| Bonus utiles |****************

B_UT = ./bonus/utils_bonus/apply_bonus.c ./bonus/utils_bonus/ft_strncmp_bonus.c\
	./bonus/checker_bonus.c ./bonus/utils_bonus/get_min_bonus.c\
	./bonus/utils_bonus/addback_bonus.c ./bonus/utils_bonus/fill_stack_bonus.c\
	./bonus/utils_bonus/create_node_bonus.c ./bonus/utils_bonus/free_node_bonus.c\
	./bonus/utils_bonus/ft_atoi_bonus.c ./bonus/utils_bonus/ft_putchar_bonus.c\
	./bonus/utils_bonus/ft_putnbr_bonus.c ./bonus/utils_bonus/ft_split_bonus.c\
	./bonus/utils_bonus/ft_strlcpy_bonus.c ./bonus/utils_bonus/ft_strlen_bonus.c\
	./bonus/utils_bonus/list_size_bonus.c ./bonus/utils_bonus/set_index_bonus.c\
	./bonus/utils_bonus/set_position_bonus.c ./bonus/utils_bonus/lstclear_bonus.c\

# ***************| Bonus G.N.Line |****************

B_NL = ./get_next_line_bonus/get_next_line_bonus.c\
	./get_next_line_bonus/get_next_line_utils_bonus.c\


B_SRCS = $(B_MV) $(B_SR) $(B_NL) $(PR_SRCS) $(B_UT)

B_OBJS = $(B_SRCS:.c=.o)

#---------------------| END Bonus |--------------------


all: $(NAME)

$(NAME): $(OBJS) push_swap.h 
	$(CC) $(OBJS) -o $(NAME)


bonus: $(B_NAME)

$(B_NAME): $(B_OBJS) ./get_next_line_bonus/get_next_line_bonus.h ./bonus/checker_bonus.h 
	$(CC) $(B_SRCS) -o $(B_NAME)


clean:
	rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	rm -rf $(NAME) $(B_NAME)

re: fclean all

.PHONY: clean  


