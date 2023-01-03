/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:10:48 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/03 15:10:01 by ccaballe         ###   ########.fr       */
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
	return (0);
}

	// printf("------------------------\n");
	// sab(&a);
	// printf("------------------------\na\n");
	// printf("first = %p\n", a.first);
	// printf("last = %p\n", a.last);
	// printf("size = %i\n", a.size);
	// printf("------------------------\na\n");
	// while (a.first)
	// {
	// 	printf("dir = %p\n", a.first);
	// 	printf("val = %i\n", a.first->val);
	// 	printf("ind = %i\n", a.first->index);
	// 	printf("prev = %p\n", a.first->prev);
	// 	printf("next = %p\n\n", a.first->next);
	// 	a.first = a.first->next;
	// }
	// printf("------------------------\nb\n");
	// printf("first = %p\n", b.first);
	// printf("last = %p\n", b.last);
	// printf("size = %i\n", b.size);
	// printf("------------------------\n");
	// while (b.first)
	// {
	// 	printf("dir = %p\n", b.first);
	// 	printf("val = %i\n", b.first->val);
	// 	printf("ind = %i\n", b.first->index);
	// 	printf("prev = %p\n", b.first->prev);
	// 	printf("next = %p\n\n", b.first->next);
	// 	b.first = b.first->next;
	// }