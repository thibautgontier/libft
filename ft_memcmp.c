/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:29:12 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/22 18:29:53 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*str;
	const unsigned char		*str2;

	if (s1 == s2 || n == 0)
		return (0);
	str = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*str != *str2)
			return (*str - *str2);
		if (n)
		{
			str++;
			str2++;
		}
	}
	return (0);
}
