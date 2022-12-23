/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:10:48 by ccaballe          #+#    #+#             */
/*   Updated: 2022/12/23 17:33:00 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int type)
{
	if (type == 1)
		write(1, "Error\n", 6);
	exit(type);
}

t_stack	*fill_stack_a(int n, t_stack *a)
{
	t_stack	node;

	node = (t_stack)malloc(sizeof(t_stack));
	//ft_lstadd_back(&a, &node); pero es t_list i no t_stack, suposo que ho haure de canviar
	return (a);
}

int	main(int argc, char **argv)
{
	int			ar;
	long int	new;
	t_stack		*a;

	if (argc < 1)
		ft_error(1);
	else if (argc < 2)
		ft_error(0);
	else
	{
		a = (t_stack *)malloc(sizeof(t_stack) * argc);
		if (!a)
			return (0);
		ar = 1;
		while (ar < argc)
		{
			new = process_input(argv[ar]);
			check_dups(new, argv, ar);
			//fill_stack_a(ft_atoi(argv[ar]), a);
			ar++;
		}
	}
	return (0);
}
