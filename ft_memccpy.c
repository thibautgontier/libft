/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 16:57:49 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/23 10:52:06 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t	i;
	char	*s1;
	char	*dst;

	i = 0;
	s1 = (char *)src;
	dst = (char *)dest;
	while (i < size)
	{
		dst[i] = s1[i];
		if (s1[i] == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
