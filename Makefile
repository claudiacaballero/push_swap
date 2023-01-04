NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SRCS =	check_stack.c \
		double_moves.c \
		input_check.c \
		main.c \
		sorting_move.c \
		stack_utils.c 

OBJS = $(SRCS:.c=.o)
RM = rm -f
DEPS = $(SRCS:.c=.d)
GREEN = \033[1;92m
RED = \033[1;91m
NC = \033[0m

%.o: %.c Makefile
	@$(CC) $(CFLAGS) -MMD -I./ -c $< -o $@

all: 
	@$(MAKE) -C libft
	@echo "$(GREEN)libft compiled$(NC)"
	@$(MAKE) -C ft_printf
	@echo "$(GREEN)ft_printf compiled$(NC)"
	@$(MAKE) $(NAME)
	@echo "$(GREEN)push_swap compiled$(NC)"

$(NAME): $(OBJS)
	@$(CC) $(OBJS) libft/libft.a ft_printf/libftprintf.a -o $@

clean:
	@$(RM) $(OBJS) $(DEPS)
	@$(MAKE) clean -C libft
	@$(MAKE) clean -C ft_printf
	@echo "$(RED)\ndestruction successful\n$(NC)"

fclean: clean
	@$(RM) $(NAME) libft/libft.a ft_printf/libftprintf.a

re: fclean all

#fer llibreria de get_next_line, ft_printf i libft && compilarles totes juntes
#al costat d'OBJS afegir el .a que es generi d'aquella llibreria 

.PHONY: all clean fclean re

-include $(DEPS)
