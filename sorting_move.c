/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:35:19 by ccaballe          #+#    #+#             */
/*   Updated: 2022/12/31 12:09:39 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sab(t_stack *stack, char id)
// {
// }

void	pab(t_stack *src, t_stack *dst)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = src->first;
	src->first = src->first->next;
	src->first->prev = NULL;
	src->size--;
	tmp->next = dst->first;
	dst->first = tmp;
	dst->size++;
	while (tmp->next)
	{
		tmp->index = i++;
		tmp = tmp->next;
	}
	//write()
}

void	rab(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->first;
	stack->first = stack->first->next;
	stack->last->next = tmp;
	tmp->prev = stack->last;
	tmp->next = NULL;
	stack->last = tmp;
	stack->first->prev = NULL;
	//write()
}

// void	rrab(t_stack *stack)
// {
// }
