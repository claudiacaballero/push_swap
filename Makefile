NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SRCS =

OBJS = $(SRCS:.c=.o)
RM = rm -f
DEPS = $(SRCS:.c=.d)

%.o: %.c Makefile
	$(CC) $(CFLAGS) -MMD -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

#fer llibreria de get_next_line, ft_printf i libft && compilarles totes juntes
#al costat d'OBJS afegir el .a que es generi d'aquella llibreria 

-include $(DEPS)
