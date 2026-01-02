NAME = push_swap 
CC = cc 
CFLAGS = -Wall -Wextra -Werror 
CFILES = main.c ft_check_numbers.c ft_strjoin.c ft_split.c ft_atoi.c \
         ft_check_duplicates.c ft_new_node.c ft_clean_list.c ft_add_node_back.c\
		 ft_moves.c ft_stack_operations.c ft_print_swap.c ft_print_rotate.c\
		 ft_print_push.c ft_print_rev_rotate.c ft_size_list.c ft_sort_three.c \
		 ft_sort_five.c ft_shanks.c

OFILES = ${CFILES:.c=.o}

all : ${NAME}

${NAME} : ${OFILES}
	
	@${CC} ${CFLAGS} ${OFILES} -o $@ 
	
%.o : %.c ft_push_swap.h
	${CC} ${CFLAGS} -c $< -o $@
clean :
	@rm -f ${OFILES}
fclean : clean 
	@rm -f ${NAME}
re : fclean all

.PHONY : clean fclean re all