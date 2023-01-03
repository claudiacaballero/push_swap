/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:35:19 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/03 14:53:16 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sab(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->first;
	stack->first = stack->first->next;
	stack->first->prev = NULL;
	tmp->next = stack->first->next;
	tmp->prev = stack->first;
	stack->first->next = tmp;
	stack->first->index = 0;
	tmp->index = 1;
	if (stack->size == 2)
		stack->last = tmp;
	else
		tmp->next->prev = tmp;
	//write()
}

void	pab(t_stack *src, t_stack *dst)
{
	t_node	*tmp;

	if (!src->size)
		return ;
	tmp = src->first;
	src->first = tmp->next;
	if (src->first)
		src->first->prev = NULL;
	if (!--src->size)
		src->last = NULL;
	if (dst->size != 0)
		dst->first->prev = tmp;
	tmp->next = dst->first;
	dst->first = tmp;
	if (dst->size == 0)
		dst->last = tmp;
	dst->size++;
	index_stack(src);
	index_stack(dst);
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
	index_stack(stack);
	//write()
}

void	rrab(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->last;
	stack->last = stack->last->prev;
	stack->last->next = NULL;
	tmp->next = stack->first;
	tmp->prev = NULL;
	stack->first->prev = tmp;
	stack->first = tmp;
	index_stack(stack);
	//write()
}
