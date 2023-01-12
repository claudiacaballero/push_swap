/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:17:51 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/12 20:00:48 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	push_stack_b(t_stack *a, t_stack *b, int chunks)
// {
	
// }

void	push_stack_b(t_stack *a, t_stack *b, int chunks)
{
	int		i;
	int		iter;
	int		max_ind_chunk;
	int		total_size;
	int		tmp_size;

	i = 0;
	total_size = a->size;
	while (++i <= chunks)
	{
		printf("i = %i\n", i);
		tmp_size = a->size;
		max_ind_chunk = (total_size / chunks) * i;
		iter = 0;
		while (iter < tmp_size)
		{
			printf("index = %i\n", a->first->index);
			if (a->first->index < max_ind_chunk)
			{
				pab(a, b, 'b');
				// if (total_size / chunks > 10 && a->first->index < max_ind_chunk / 2)
				// 	rab(b, 'b');
			}
			else
				rab(a, 'a');
			iter++;
		}
	}
}
