/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:11:40 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/11 18:32:47 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack)
{
	if (isinorder(stack))
		return ;
	else if (stack->first->val < stack->first->next->val)
		rrab(stack, 'a');
	else if (whereismax(stack) == 0)
		rab(stack, 'a');
	if (!isinorder(stack))
		sab(stack, 'a');
}

void	sort_four(t_stack *a, t_stack *b)
{
	if (isinorder(a))
		return ;
	else if (whereismin(a) == 1)
		sab(a, 'a');
	else if (whereismin(a) == 2)
		rrab(a, 'a');
	if (whereismin(a) == 3)
		rrab(a, 'a');
	pab(a, b, 'b');
	sort_three(a);
	pab(b, a, 'a');
}

void	sort_five(t_stack *a, t_stack *b)
{
	if (whereismin(a) == 1)
		sab(a, 'a');
	else if (whereismin(a) == 2)
		rrab(a, 'a');
	if (whereismin(a) == 3)
		rrab(a, 'a');
	if (whereismin(a) == 4)
		rrab(a, 'a');
	pab(a, b, 'b');
	if (whereismin(a) == 1)
		sab(a, 'a');
	else if (whereismin(a) == 2)
		rrab(a, 'a');
	if (whereismin(a) == 3)
		rrab(a, 'a');
	pab(a, b, 'b');
	sort_three(a);
	pab(b, a, 'a');
	pab(b, a, 'a');
}
