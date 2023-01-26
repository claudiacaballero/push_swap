/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:39:05 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/24 17:05:15 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	checker(&a, &b);
	ft_free(&a);
	ft_free(&b);
	return (0);
}

void	checker(t_stack *a, t_stack *b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!exec_moves(str, a, b))
		{
			ft_free(b);
			ft_error(1, a);
		}
		free(str);
		str = get_next_line(0);
	}
	free(str);
	if (b->size != 0)
		ft_printf("KO\n");
	else if (!isinorder(a))
		ft_printf("KO\n");
	else
		ft_printf("OK\n");
}

int	exec_moves(char *str, t_stack *a, t_stack *b)
{
	if (!ft_strncmp(str, "pa\n", ft_strlen(str)))
		pab(b, a, 'c');
	else if (!ft_strncmp(str, "pb\n", ft_strlen(str)))
		pab(a, b, 'c');
	else if (!ft_strncmp(str, "ra\n", ft_strlen(str)))
		rab(a, 'c');
	else if (!ft_strncmp(str, "rb\n", ft_strlen(str)))
		rab(b, 'c');
	else if (!ft_strncmp(str, "rr\n", ft_strlen(str)))
		rr(a, b, 'c');
	else if (!ft_strncmp(str, "rra\n", ft_strlen(str)))
		rrab(a, 'c');
	else if (!ft_strncmp(str, "rrb\n", ft_strlen(str)))
		rrab(b, 'c');
	else if (!ft_strncmp(str, "rrr\n", ft_strlen(str)))
		rrr(a, b, 'c');
	else if (!ft_strncmp(str, "sa\n", ft_strlen(str)))
		sab(a, 'c');
	else if (!ft_strncmp(str, "sb\n", ft_strlen(str)))
		sab(b, 'c');
	else if (!ft_strncmp(str, "ss\n", ft_strlen(str)))
		ss(a, b, 'c');
	else
		return (0);
	return (1);
}
