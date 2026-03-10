CC = cc
FLAGS = -Wall -Werror -Wextra
NAME = exec
OBJDIR = build
SRCS = utils.c \
			 0_reverse.c \
			 1_merge_two_sorted_list.c \
			 2_list_cycle.c \
			 3_remove_nth_from_the_end.c \
			 4_middle_of_list.c \
			 5_reorder_list.c \


OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.c
	mkdir -p $(OBJDIR)
	$(CC) -c $< -o $@ 

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
