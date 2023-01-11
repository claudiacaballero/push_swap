/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:51:32 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/11 19:13:10 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_chunks_b(t_stack *a, t_stack *b, int chunks)
{
	t_node	top;
	t_node	bottom;
	int		i;

	i = 0;
	while (++i < chunks)
	{
		top = a->first;
		bottom = a->last;
		while (top->pos < bottom->pos)
		{
			if (top->index < (a->size / chunks) * i)
				pab(a, b, 'b');
			if (bottom->index < (a->size / chunks) * i)
			{
				rrab(a, 'a');
				pab(a, b, 'b');
				//mirar quan fer rb
			}
			top = top->next;
			bottom = bottom->prev;
		}
	}
	//sort_params pels que quedin potser ??
	//passar a stack a de manera ordenada
}


