# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: claudia <claudia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 16:08:34 by ccaballe          #+#    #+#              #
#    Updated: 2023/01/24 11:36:35 by claudia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS = checker
CFLAGS = -Wall -Wextra -Werror
SRCS =	check_stack.c \
		double_moves.c \
		input_check.c \
		push_swap.c \
		sorting_move.c \
		sort_small.c \
		sort_big.c

OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

SRCBONUS = 	bonus/double_moves_bonus.c \
			bonus/sorting_move_bonus.c \
			bonus/input_check_bonus.c \
			bonus/checker_bonus.c \
			bonus/checker_utils_bonus.c \
			bonus/check_stack_bonus.c 

OBJBONUS = $(SRCBONUS:.c=.o)
DEPBONUS = $(SRCBONUS:.c=.d)

RM = rm -f
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

bonus:
	@$(MAKE) -C libft
	@echo "$(GREEN)libft compiled$(NC)"
	@$(MAKE) -C ft_printf
	@echo "$(GREEN)ft_printf compiled$(NC)"
	@$(MAKE) $(BONUS)
	@echo "$(GREEN)checker compiled$(NC)"

$(BONUS): $(OBJS) $(OBJBONUS)
	@$(CC) $(OBJBONUS) libft/libft.a ft_printf/libftprintf.a -o $@

clean:
	@$(RM) $(OBJS) $(DEPS) $(OBJBONUS) $(DEPBONUS)
	@$(MAKE) clean -C libft
	@$(MAKE) clean -C ft_printf
	@echo "$(RED)\ndestruction successful\n$(NC)"

fclean: clean
	@$(RM) $(NAME) $(BONUS) libft/libft.a ft_printf/libftprintf.a

re: fclean all

.PHONY: all clean fclean re bonus

-include $(DEPS)
