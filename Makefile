# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 16:08:34 by ccaballe          #+#    #+#              #
#    Updated: 2023/01/11 19:02:08 by ccaballe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SRCS =	check_stack.c \
		double_moves.c \
		input_check.c \
		main.c \
		sorting_move.c \
		sort_small.c \
		sort_big.c

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

.PHONY: all clean fclean re

-include $(DEPS)
