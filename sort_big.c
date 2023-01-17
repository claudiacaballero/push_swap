/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:17:51 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/17 20:17:20 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_stack *a, t_stack *b, int chunks, int total_size)
{
	int		i;
	int		iter;
	int		max_ind_chunk;
	int		tmp_size;

	i = 0;
	while (a->first)
	{
		tmp_size = a->size;
		max_ind_chunk = (total_size / chunks) * ++i;
		iter = -1;
		while (++iter < tmp_size)
		{
			if (a->first->index < max_ind_chunk)
				push_stack_b(a, b, max_ind_chunk, total_size);
			else
				rab(a, 'a');
		}
	}
	//push-stack_a;
}

void	push_stack_b(t_stack *a, t_stack *b, int max_ind_chunk, int total_size)
{
	pab(a, b, 'b');
	if (total_size > 50)
	{
		if (b->first->index < max_ind_chunk / 2)
			rab(b, 'b');
	}
}

void	push_stack_a(t_stack *a, t_stack *b)
{
	while (b->first)
	{
		if (whereismax(b) < b->size / 2)
		{
			if (find_node(b, b->size - 2) < whereismax(b))
			
		}
		else
		{}
	}
}
