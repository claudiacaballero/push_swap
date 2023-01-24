/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:25:27 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/24 16:19:21 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

//list struct
typedef struct s_node
{
	int				val;
	int				pos;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*first;
	t_node	*last;
	int		size;
}	t_stack;

void		ft_error(int type, t_stack *a);
void		fill_stack_a(int n, t_stack *a);
void		initialize_stacks(t_stack *a, t_stack *b);
void		checker(t_stack *a, t_stack *b);
int			exec_moves(char *str, t_stack *a, t_stack *b);

int			isinorder(t_stack *stack);
int			whereismin(t_stack *stack);
int			whereismax(t_stack *stack);
void		index_stack(t_stack *stack);
int			find_node(t_stack *stack, int index);

void		ft_free(t_stack *stack);
long int	process_input(char *s, t_stack *a);
long int	ft_atol(char *s, char sign, t_stack *a);
void		check_dups(long int n, char **argv, int ar, t_stack *a);

void		sab(t_stack *stack, char ab);
void		pab(t_stack *src, t_stack *dst, char ab);
void		rab(t_stack *stack, char ab);
void		rrab(t_stack *stack, char ab);
void		pos_stack(t_stack *stack);
//doubles
void		ss(t_stack *a, t_stack *b, char c);
void		rr(t_stack *a, t_stack *b, char c);
void		rrr(t_stack *a, t_stack *b, char c);

#endif