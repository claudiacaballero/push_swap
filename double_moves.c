/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:17:36 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/04 13:25:35 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *a, t_stack *b)
{
	sab(a, 's');
	sab(b, 's');
	ft_printf("ss\n");
}

void	rr(t_stack *a, t_stack *b)
{
	rab(a, 'r');
	rab(b, 'r');
	ft_printf("rr\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	rrab(a, 'r');
	rrab(b, 'r');
	ft_printf("rrr\n");
}
