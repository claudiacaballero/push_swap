/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:25:27 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/20 17:24:11 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "libf/libft.h"
# include "ft_printf/ft_printf.h"

void		sab(t_stack *stack, char ab);
void		pab(t_stack *src, t_stack *dst, char ab);
void		rab(t_stack *stack, char ab);
void		rrab(t_stack *stack, char ab);
void		pos_stack(t_stack *stack);
//doubles
void		ss(t_stack *a, t_stack *b);
void		rr(t_stack *a, t_stack *b);
void		rrr(t_stack *a, t_stack *b);

#endif