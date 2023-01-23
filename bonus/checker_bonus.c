/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:15:22 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/23 19:25:52 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	checker(void)
{
	//get next line fd = 0
	//STDIN_FILENO
	//protegir moviments (si son impossibles que no faci res)
}

int	main(int argc, char **argv)
{
	int			ar;
	long int	new;
	t_stack		a;
	t_stack		b;

	initialize_stacks(&a, &b);
	if (argc < 2)
		ft_error(0, &a);
	else
	{
		ar = 1;
		while (ar < argc)
		{
			new = process_input(argv[ar], &a);
			check_dups(new, argv, ar, &a);
			fill_stack_a(ft_atoi(argv[ar]), &a);
			ar++;
		}
	}
	checker();
}

void	ft_error(int type, t_stack *a)
{
	if (type == 1)
		write(2, "Error\n", 6);
	ft_free(a);
	exit(type);
}

void	fill_stack_a(int n, t_stack *a)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		ft_error(1, a);
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
	node->index = 0;
	node->pos = a->size - 1;
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
