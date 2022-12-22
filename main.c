/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:10:48 by ccaballe          #+#    #+#             */
/*   Updated: 2022/12/22 19:11:52 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int type)
{
	if (type == 1)
		write(1, "Error\n", 6);
	exit(type);
}

int	main(int argc, char **argv)
{
	int			ar;
	long int	new;

	if (argc < 1)
		ft_error(1);
	else if (argc < 2)
		ft_error(0);
	else
	{
		ar = 1;
		while (ar < argc)
		{
			new = process_input(argv[ar]);
			if (new > INT_MAX || new < INT_MIN)
				ft_error(1);
			printf("%li\n", new);
			//check_dups(new, argv);
			ar++;
		}
	}
	return (0);
}
