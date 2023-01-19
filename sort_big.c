/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:17:51 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/19 19:41:58 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_stack *a, t_stack *b, int chunks, int total_size)
{
	int		i;
	int		iter;
	int		max_ind;
	int		tmp_size;
	int		chunk_size;

	chunk_size = total_size / chunks;
	i = 0;
	while (a->first)
	{
		tmp_size = a->size;
		max_ind = (total_size / chunks) * ++i;
		iter = -1;
		while (++iter < tmp_size)
		{
			if (a->first->index < max_ind)
				push_stack_b(a, b, max_ind, chunk_size);
			else
				rab(a, 'a');
		}
	}
	push_stack_a(a, b);
}

void	push_stack_b(t_stack *a, t_stack *b, int max_ind, int chunk_size)
{
	pab(a, b, 'b');
	if (chunk_size > 20)
	{
		if (b->first->index < (max_ind - (chunk_size / 2)))
			rab(b, 'b');
	}
}

void	push_stack_a(t_stack *a, t_stack *b)
{
	while (b->first)
	{
		if (b->size == 1)
			pab(b, a, 'a');
		else if (mtp(b, b->size - 2) < mtp(b, b->size - 1))
		{
			push_node(b, b->size - 2, 'b');
			pab(b, a, 'a');
			push_node(b, b->size, 'b');
			pab(b, a, 'a');
			sab(a, 'a');
		}
		else
		{
			push_node(b, b->size - 1, 'b');
			pab(b, a, 'a');
		}
	}
}

void	push_node(t_stack *stack, int index, char s)
{
	int	pos;

	pos = find_node(stack, index);
	if (pos == -1)
		return ;
	while (pos != 0)
	{
		if (pos < stack->size / 2)
			rab(stack, s);
		else
			rrab(stack, s);
		pos = find_node(stack, index);
	}
}

int	mtp(t_stack *stack, int index)
{
	int	mtp;

	if (find_node(stack, index) < stack->size / 2)
		mtp = find_node(stack, index);
	else
		mtp = stack->size - find_node(stack, index);
	return (mtp);
}
