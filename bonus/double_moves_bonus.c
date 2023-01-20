/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_moves_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:23:19 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/20 17:23:26 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
