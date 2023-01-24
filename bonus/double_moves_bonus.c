/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_moves_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:23:19 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/24 15:51:54 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ss(t_stack *a, t_stack *b, char c)
{
	sab(a, 's');
	sab(b, 's');
	if (c != 'c')
		ft_printf("ss\n");
}

void	rr(t_stack *a, t_stack *b, char c)
{
	rab(a, 'r');
	rab(b, 'r');
	if (c != 'c')
		ft_printf("rr\n");
}

void	rrr(t_stack *a, t_stack *b, char c)
{
	rrab(a, 'r');
	rrab(b, 'r');
	if (c != 'c')
		ft_printf("rrr\n");
}
