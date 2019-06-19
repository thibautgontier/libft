/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgontier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 16:00:14 by tgontier          #+#    #+#             */
/*   Updated: 2018/10/14 17:23:34 by tgontier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*dst;
	const char	*str;

	i = 0;
	dst = dest;
	str = src;
	while (i < (int)n)
	{
		dst[i] = str[i];
		i++;
	}
	return (dest);
}
