/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:09:49 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/06 18:53:35 by ccaballe         ###   ########.fr       */
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
			i = tmp->index;
			iter = iter->next;
		}
		else
		{
			i = iter->index;
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
			i = tmp->index;
			iter = iter->next;
		}
		else
		{
			i = iter->index;
			tmp = iter;
			iter = tmp->next;
		}
	}
	return (i);
}
