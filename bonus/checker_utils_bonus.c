/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:32:37 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/24 16:29:56 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	exec_moves(char *str, t_stack *a, t_stack *b)
{
	if (!ft_strncmp(str, "pa", ft_strlen(str)) && b->size > 0)
		pab(b, a, 'c');
	else if (!ft_strncmp(str, "pb", ft_strlen(str)) && a->size > 0)
		pab(a, b, 'c');
	else if (!ft_strncmp(str, "ra", ft_strlen(str)))
		rab(a, 'c');
	else if (!ft_strncmp(str, "rb", ft_strlen(str)))
		rab(b, 'c');
	else if (!ft_strncmp(str, "rr", ft_strlen(str)))
		rr(a, b, 'c');
	else if (!ft_strncmp(str, "rra", ft_strlen(str)))
		rrab(a, 'c');
	else if (!ft_strncmp(str, "rrb", ft_strlen(str)))
		rrab(b, 'c');
	else if (!ft_strncmp(str, "rrr", ft_strlen(str)))
		rrr(a, b, 'c');
	else if (!ft_strncmp(str, "sa", ft_strlen(str)))
		sab(a, 'c');
	else if (!ft_strncmp(str, "sb", ft_strlen(str)))
		sab(b, 'c');
	else if (!ft_strncmp(str, "ss", ft_strlen(str)))
		ss(a, b, 'c');
	else
		return (0);
	return (1);
}
