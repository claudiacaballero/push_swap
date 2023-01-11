/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:09:49 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/11 17:09:50 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isinorder(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->first;
	while (tmp->next)
	{
		if (tmp->val > tmp->next->val)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	whereismin(t_stack *stack)
{
	int		i;
	t_node	*tmp;
	t_node	*iter;

	i = 0;
	tmp = stack->first;
	iter = tmp->next;
	while (iter)
	{
		if (tmp->val < iter->val)
		{
			i = tmp->pos;
			iter = iter->next;
		}
		else
		{
			i = iter->pos;
			tmp = iter;
			iter = tmp->next;
		}
	}
	return (i);
}

int	whereismax(t_stack *stack)
{
	int		i;
	t_node	*tmp;
	t_node	*iter;

	i = 0;
	tmp = stack->first;
	iter = tmp->next;
	while (iter)
	{
		if (tmp->val > iter->val)
		{
			i = tmp->pos;
			iter = iter->next;
		}
		else
		{
			i = iter->pos;
			tmp = iter;
			iter = tmp->next;
		}
	}
	return (i);
}

void	index_stack(t_stack *stack)
{
	t_node	*tmp;
	t_node	*iter;

	tmp = stack->first;
	while (tmp->next)
	{
		iter = stack->first;
		while (iter)
		{
			if (tmp->val > iter->val)
				tmp->index++;
			iter = iter->next;
		}
		tmp = tmp->next;
	}
}
