/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:10:48 by ccaballe          #+#    #+#             */
/*   Updated: 2022/12/31 14:18:22 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_error(int type)
{
	if (type == 1)
		write(1, "Error\n", 6);
	exit(type);
}

void	fill_stack_a(int n, t_stack *a)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		ft_error(1);
	node->val = n;
	node->prev = NULL;
	node->next = NULL;
	if (!a->first)
	{
		a->first = node;
		a->last = node;
		a->size = 1;
	}
	else
	{
		a->last->next = node;
		node->prev = a->last;
		a->last = node;
		a->size++;
	}
	node->index = a->size - 1;
}

void	initialize_stacks(t_stack *a, t_stack *b)
{
	a->first = NULL;
	a->last = NULL;
	a->size = 0;
	b->first = NULL;
	b->last = NULL;
	b->size = 0;
}

int	main(int argc, char **argv)
{
	int			ar;
	long int	new;
	t_stack		a;
	t_stack		b;

	initialize_stacks(&a, &b);
	if (argc < 2)
		ft_error(0);
	else
	{
		ar = 1;
		while (ar < argc)
		{
			new = process_input(argv[ar]);
			check_dups(new, argv, ar);
			fill_stack_a(ft_atoi(argv[ar]), &a);
			ar++;
		}
	}
	// while (a.first)
	// {
	// 	printf("%i\n", a.first->val);
	// 	a.first = a.first->next;
	// }
	return (0);
}
