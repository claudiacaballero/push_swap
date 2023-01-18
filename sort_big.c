/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:17:51 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/18 16:18:56 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_stack *a, t_stack *b, int chunks, int total_size)
{
	int		i;
	int		iter;
	int		max_ind;
	int		tmp_size;

	i = 0;
	while (a->first)
	{
		tmp_size = a->size;
		max_ind = (total_size / chunks) * ++i;
		iter = -1;
		while (++iter < tmp_size)
		{
			if (a->first->index < max_ind)
				push_stack_b(a, b, max_ind, total_size);
			else
				rab(a, 'a');
		}
	}
	push_stack_a(a, b);
}

void	push_stack_b(t_stack *a, t_stack *b, int max_ind, int total_size)
{
	pab(a, b, 'b');
	if (total_size > 50)
	{
		if (b->first->index < max_ind / 2)
			rab(b, 'b');
	}
}

void	push_stack_a(t_stack *a, t_stack *b)
{
	t_node	max;
	t_node	second;
	int		max_ind;

	while (b->first)
	{
		max = find_node(b, b->size - 1);
		second = find_node(b, b->size - 2);
		max_ind = b->size - 1;
		while (max_ind == b->size - 1)
		{
			if (max == 0 || second == 0)
				pab(b, a, 'a');
			else if (max < b-size / 2 && max < b-size - second)
				rrab(b, 'b');
			else
				rab(b, 'b');
		//afegir altres casos de rrab i de rab.
		}
	}
}

	// while (b->first)
	// {
	// 	if (whereismax(b) < b->size / 2)
	// 	{
	// 		if (whereismax(b) == 0 || find_node(b, b->size - 2) == 0)
	// 			pab(b, a, 'a');
	// 		else
	// 			rab(b, 'b');
	// 	}
	// 	else
	// 	{
	// 		if (find_node(b, b->size - 2) == 0 || whereismax(b) == 0)
	// 			pab(b, a, 'a');
	// 		else
	// 			rrab(b, 'b');
	// 	}
	// 	if (!isinorder(a))
	// 		sab(a, 'a');
	// }
