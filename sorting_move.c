/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:35:19 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/11 16:54:25 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sab(t_stack *stack, char ab)
{
	t_node	*tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->first;
	stack->first = stack->first->next;
	stack->first->prev = NULL;
	tmp->next = stack->first->next;
	tmp->prev = stack->first;
	stack->first->next = tmp;
	stack->first->pos = 0;
	tmp->pos = 1;
	if (stack->size == 2)
		stack->last = tmp;
	else
		tmp->next->prev = tmp;
	if (ft_strchr("ab", ab))
		ft_printf("s%c\n", ab);
}

void	pab(t_stack *src, t_stack *dst, char ab)
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
	pos_stack(src);
	pos_stack(dst);
	if (ft_strchr("ab", ab))
		ft_printf("p%c\n", ab);
}

void	rab(t_stack *stack, char ab)
{
	t_node	*tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->first;
	stack->first = stack->first->next;
	stack->last->next = tmp;
	tmp->prev = stack->last;
	tmp->next = NULL;
	stack->last = tmp;
	stack->first->prev = NULL;
	pos_stack(stack);
	if (ft_strchr("ab", ab))
		ft_printf("r%c\n", ab);
}

void	rrab(t_stack *stack, char ab)
{
	t_node	*tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->last;
	stack->last = stack->last->prev;
	stack->last->next = NULL;
	tmp->next = stack->first;
	tmp->prev = NULL;
	stack->first->prev = tmp;
	stack->first = tmp;
	pos_stack(stack);
	if (ft_strchr("ab", ab))
		ft_printf("rr%c\n", ab);
}

void	pos_stack(t_stack *stack)
{
	t_node	*tmp;
	int		i;

	tmp = stack->first;
	i = 0;
	while (tmp)
	{
		tmp->pos = i++;
		tmp = tmp->next;
	}
}
