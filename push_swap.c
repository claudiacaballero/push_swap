/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:10:48 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/24 17:01:41 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_params(t_stack *a, t_stack *b)
{
	if (isinorder(a))
		return ;
	else if (a->size < 4)
		sort_three(a);
	else if (a->size == 4)
		sort_four(a, b);
	else if (a->size == 5)
		sort_five(a, b);
	else if (a->size < 200)
		sort_big(a, b, 3, a->size);
	else
		sort_big(a, b, 8, a->size);
}

int	main(int argc, char **argv)
{
	int			ar;
	long int	new;
	t_stack		a;
	t_stack		b;

	if (argc < 2)
		ft_error(0, &a);
	else
	{
		initialize_stacks(&a, &b);
		ar = 1;
		while (ar < argc)
		{
			new = process_input(argv[ar], &a);
			check_dups(new, argv, ar, &a);
			fill_stack_a(ft_atoi(argv[ar]), &a);
			ar++;
		}
	}
	index_stack(&a);
	sort_params(&a, &b);
	ft_free(&a);
	ft_free(&b);
	return (0);
}
