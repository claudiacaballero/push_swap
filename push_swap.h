/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:38:33 by ccaballe          #+#    #+#             */
/*   Updated: 2022/12/23 15:01:10 by ccaballe         ###   ########.fr       */
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
typedef struct ps_stack
{
	int				content;
	struct ps_stack	*next;
	struct ps_stack	*prev;
}	t_stack;

//main functions
void		ft_error(int type);
int			main(int argc, char **argv);

//input_check functions
long int	process_input(char *s);
long int	ft_atol(char *s, char sign);
void		check_dups(long int n, char **argv, int ar);

#endif