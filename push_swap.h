/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:38:33 by ccaballe          #+#    #+#             */
/*   Updated: 2022/12/31 12:10:08 by ccaballe         ###   ########.fr       */
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

//list struct
typedef struct s_node
{
	int				val;
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
int			main(int argc, char **argv);

//input_check functions
long int	process_input(char *s);
long int	ft_atol(char *s, char sign);
void		check_dups(long int n, char **argv, int ar);

//sorting functions
void		rab(t_stack *stack);
void		pab(t_stack *src, t_stack *dst);

#endif