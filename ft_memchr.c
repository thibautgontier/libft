/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 10:51:11 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/23 10:51:13 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*s2;

	s2 = s;
	while (n--)
	{
		if (*s2++ == (unsigned char)c)
			return ((void *)--s2);
	}
	return (NULL);
}
