/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:38:33 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/17 18:30:14 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//includes
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

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

//main functions
void		ft_error(int type);
void		fill_stack_a(int n, t_stack *a);
void		initialize_stacks(t_stack *a, t_stack *b);
int			main(int argc, char **argv);
void		sort_params(t_stack *a, t_stack *b);

//input_check functions
long int	process_input(char *s);
long int	ft_atol(char *s, char sign);
void		check_dups(long int n, char **argv, int ar);

//sorting movement functions
void		sab(t_stack *stack, char ab);
void		pab(t_stack *src, t_stack *dst, char ab);
void		rab(t_stack *stack, char ab);
void		rrab(t_stack *stack, char ab);
void		pos_stack(t_stack *stack);
//doubles
void		ss(t_stack *a, t_stack *b);
void		rr(t_stack *a, t_stack *b);
void		rrr(t_stack *a, t_stack *b);

//check stack functions
int			isinorder(t_stack *stack);
int			whereismin(t_stack *stack);
int			whereismax(t_stack *stack);
void		index_stack(t_stack *stack);
int			find_node(t_stack *stack, int index);

//sorting
void		sort_three(t_stack *stack);
void		sort_four(t_stack *a, t_stack *b);
void		sort_five(t_stack *a, t_stack *b);
void		sort_big(t_stack *a, t_stack *b, int chunks, int total_size);
void		push_stack_b(t_stack *a, t_stack *b, int max_ind_chunk, int total_size);

#endif