/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:35:19 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/02 16:21:40 by ccaballe         ###   ########.fr       */
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
	//write()
}

void	pab(t_stack *src, t_stack *dst)
{
	t_node	*tmp;
	t_node	*iter;
	int		i;

	i = 0;
	tmp = src->first;
	src->first = src->first->next;
	src->first->prev = NULL;
	src->size--;
	iter = src->first;
	while (iter)
	{
		iter->index -= 1;
		iter = iter->next;
	}
	tmp->next = dst->first;
	dst->first = tmp;
	dst->size++;
	while (tmp)
	{
		tmp->index = i++;
		tmp = tmp->next;
	}
	//write()
}

void	rab(t_stack *stack)
{
	t_node	*tmp;
	int		i;

	tmp = stack->first;
	stack->first = stack->first->next;
	stack->last->next = tmp;
	tmp->prev = stack->last;
	tmp->next = NULL;
	stack->last = tmp;
	stack->first->prev = NULL;
	i = 1;
	while (tmp)
	{
		tmp->index = stack->size - i;
		i++;
		tmp = tmp->prev;
	}
	//write()
}

void	rrab(t_stack *stack)
{
	t_node	*tmp;
	int		i;

	tmp = stack->last;
	stack->last = stack->last->prev;
	stack->last->next = NULL;
	tmp->next = stack->first;
	tmp->prev = NULL;
	stack->first->prev = tmp;
	stack->first = tmp;
	i = 0;
	while (tmp)
	{
		tmp->index = i++;
		tmp = tmp->next;
	}
	//write()
}
