/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 12:00:27 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/23 10:50:51 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	j = i;
	while (s2[i - j] && i - j < n)
	{
		s1[i] = s2[i - j];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
