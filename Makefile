# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 16:08:34 by ccaballe          #+#    #+#              #
#    Updated: 2023/01/26 14:49:35 by ccaballe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS = checker
CFLAGS = -Wall -Wextra -Werror
SRCS =	check_stack.c \
		double_moves.c \
		input_check.c \
		sorting_move.c \
		utils.c 

MAND =	push_swap.c \
		sort_small.c \
		sort_big.c

OBJS = $(SRCS:.c=.o) $(MAND:.c=.o)
DEPS = $(SRCS:.c=.d) $(MAND:.c=.d)

SRCBONUS = 	checker.c

OBJBONUS = $(SRCS:.c=.o) $(SRCBONUS:.c=.o)
DEPBONUS = $(SRCS:.c=.d) $(SRCBONUS:.c=.d)

RM = rm -f

LIBS = libft/libft.a ft_printf/libftprintf.a

GREEN = \033[1;92m
RED = \033[1;91m
NC = \033[0m

%.o: %.c $(LIBS) Makefile
	@$(CC) $(CFLAGS) -MMD -I./ -c $< -o $@

all: 
	@$(MAKE) -C libft
	@$(MAKE) -C ft_printf
	@$(MAKE) $(NAME)

$(NAME):: $(OBJS)
	@$(CC) $(OBJS) $(LIBS) -o $@
	@echo "$(GREEN)push_swap compiled$(NC)"

$(NAME)::
	@echo -n

bonus:
	@$(MAKE) -C libft
	@$(MAKE) -C ft_printf
	@$(MAKE) $(BONUS)

$(BONUS):: $(OBJBONUS)
	@$(CC) $(OBJBONUS) $(LIBS) -o $@
	@echo "$(GREEN)checker compiled$(NC)"

$(BONUS)::
	@echo -n

clean:
	@$(RM) $(OBJS) $(DEPS) $(OBJBONUS) $(DEPBONUS)
	@$(MAKE) clean -C libft
	@$(MAKE) clean -C ft_printf
	@echo "$(RED)\ndestruction successful\n$(NC)"

fclean: clean
	@$(RM) $(NAME) $(BONUS) $(LIBS)

re: fclean all

.PHONY: all clean fclean re bonus

-include $(DEPS)
-include $(DEPBONUS)
