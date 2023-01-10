/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:21:16 by ccaballe          #+#    #+#             */
/*   Updated: 2023/01/10 19:42:10 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	process_input(char *s)
{
	int		i;
	char	sign;
	int		zero;

	i = 0;
	zero = 0;
	sign = 0;
	if (s[i] == '+' || s[i] == '-')
		sign = s[i++];
	if (!s[i])
		ft_error(1);
	zero = i;
	while (s[i] == '0' && s[i + 1] != '\0')
		zero = ++i;
	i = -1;
	if (sign)
		i = 0;
	while (s[++i])
		if (s[i] < '0' || s[i] > '9')
			ft_error(1);
	if (i - zero > 11 || (!sign && i - zero > 10))
		ft_error(1);
	if (!sign)
		sign = '+';
	return (ft_atol(&s[zero], sign));
}

long int	ft_atol(char *s, char sign)
{
	int			i;
	long int	neg;
	long int	res;

	i = 0;
	res = 0;
	if (sign == '-')
		neg = -1;
	else
		neg = 1;
	while (s[i])
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res = res * neg;
	if (res > INT_MAX || res < INT_MIN)
		ft_error(1);
	return (res);
}

void	check_dups(long int n, char **argv, int ar)
{
	int			i;
	long int	temp;

	i = 1;
	temp = 0;
	while (argv[i])
	{
		if (i != ar)
		{
			temp = process_input(argv[i]);
			if (n == temp)
				ft_error(1);
		}
		i++;
	}
}
