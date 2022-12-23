/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaballe <ccaballe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:18:56 by ccaballe          #+#    #+#             */
/*   Updated: 2022/09/22 18:48:57 by ccaballe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	l;

	l = ft_strlen(s1);
	s3 = (char *)malloc(sizeof(char) * (l + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	if (l != 0)
		ft_memcpy(s3, s1, l);
	i = 0;
	while (s2[i] != '\0')
	{
		s3[l + i] = s2[i];
		i++;
	}
	s3[l + i] = '\0';
	return (s3);
}
